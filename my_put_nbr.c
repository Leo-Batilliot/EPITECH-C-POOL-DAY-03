/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** task
*/

/*    recursively prints the numbers of a string digit by digit    */
/*    ex: nb = 689 -> 689 >= 10 [next] call the function with nb = 689/10    */
/*    68 >= 10 [next] call the function for 6, [next] 6 < 10 so the    */
/*    last function call prints its digit (6)    */
/*    since the last is over, second to last prints(8), ..first prints(9)    */
int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_put_nbr(147483648);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
