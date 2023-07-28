/*
** EPITECH PROJECT, 2022
** my_bsq.c
** File description:
** my_bsq.c
*/

#include "my.h"

int get_stline(char *buffer)
{
    int n = 0;
    int count = 0;
    while (buffer[n] != '\0') {
        if (buffer[n] == '\n')
            count++;
        n++;
    }
    return (count - 1);
}

int nb_column(char *buffer)
{
    int i = 0;
    int x = 0;

    for (; buffer[x] != '\n'; x++);
    x = x + 1;
    while (buffer[x] != '\n') {
        x++;
        i++;
    }
    return (i);
}
