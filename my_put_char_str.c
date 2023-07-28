/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}
