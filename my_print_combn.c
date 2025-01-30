/*
** EPITECH PROJECT, 2024
** my_print_combn
** File description:
** task 09
*/
#include <unistd.h>
static void my_putchar(char c)
{
    write(1, &c, 1);
}

/*    finds the maximum number composed of n digits in ascending order    */
/*    ex : n = 4 -> max = 6789    */
int find_max(int n)
{
    int max = 9;
    int j = 8;
    int power = 10;

    for (int i = n; i > 1; i = i - 1) {
        max = max + (j * power);
        j = j - 1;
        power = power * 10;
    }
    return max;
}

/*    checks if the digits of a number are in ascending orders    */
/*    ex : nb = 689 -> 9 > 8 [next] 8 > 6 [next] last digit, return  0    */
/*    ex : nb = 213 -> 3 > 1 [next] 1 <= 2 return 1    */
int verif_order(int n, int nb)
{
    int digit = nb % 10;
    int nextdigit = nb / 10 % 10;

    nb /= 10;
    for (n; n > 1; n = n - 1) {
        if (digit <= nextdigit)
            return 1;
        digit = nb % 10;
        nb /= 10;
        nextdigit = nb % 10;
    }
    return 0;
}

/*    simplified_put_nbr, check my_put_nbr.c for the explanation    */
/*    stops at count == n so that 0 are printed at the start if needed    */
void print_solution(int n, int nb, int count)
{
    char rest_digit;

    if (count != n) {
        rest_digit = nb % 10 + '0';
        print_solution(n, nb / 10, count + 1);
        my_putchar(rest_digit);
    }
}

/*    checks if the number printed is the last, if not it prints ", "    */
void no_coma_for_last(int nb, int max)
{
    if (nb == max)
        return;
    else {
        my_putchar(',');
        my_putchar(' ');
    }
}

/*    loops through every number until the maximum and print the ones    */
/*    containing digits in ascending orders    */
/*    ex : n = 2 -> 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, etc..., 89*/
int my_print_combn(int n)
{
    int max_solution = find_max(n);

    for (int nb = 0; nb <= max_solution; nb = nb + 1)
        if (!verif_order(n, nb)) {
            print_solution(n, nb, 0);
            no_coma_for_last(nb, max_solution);
        }
}
