/*
** EPITECH PROJECT, 2024
** my_print_comb
** File description:
** task 05
*/

int no_coma(int a, int b, int c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (a <= '6') {
        my_putchar(',');
        my_putchar(' ');
    }
}

int loopfilter(int a, int b, int c)
{
    for (c = '0'; c <= '9'; c++)
        if (a < b && b < c && a != b && a != c && b != c) {
        no_coma(a, b, c);
        }
}

int my_print_comb(void)
{
    int a;
    int b;
    int c;

    for (a = '0'; a <= '9'; a++) {
        for (b = '0'; b <= '9'; b++) {
            loopfilter(a, b, c);
        }
    }
}
