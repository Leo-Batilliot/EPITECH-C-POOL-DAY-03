/*
** EPITECH PROJECT, 2024
** my_print_comb2
** File description:
** task 06
*/

int check(int a, int b)
{
    if (a == '9' && b == '8') {
    } else {
        my_putchar(',');
        my_putchar(' ');
        }
}

int condition(int a, int b, int c, int d)
{
    if ((a == c && b < d) || a < c) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(' ');
        my_putchar(c);
        my_putchar(d);
        check(a, b);
    }
}

int loop2(int a, int b, int c)
{
    int d;

    for (c = '0'; c <= '9'; c++) {
        for (d = '0'; d <= '9'; d++) {
            condition(a, b, c, d);
        }
    }
}

int my_print_comb2(void)
{
    int a;
    int b;
    int c;

    for (a = '0'; a <= '9'; a++) {
        for (b = '0'; b <= '9'; b++) {
            loop2(a, b, c);
        }
    }
}
