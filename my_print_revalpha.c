/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** task
*/

int my_print_revalpha(void)
{
    int i = 0;

    for (i = 0; i < 26; i++) {
        my_putchar(122 - i);
    }
}
