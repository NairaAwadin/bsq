/*
** EPITECH PROJECT, 2023
** generator
** File description:
** generator
*/

#include "my.h"

int **new_double_tab(char *new_buffer, int size)
{
    int a = 0;
    int c;
    int **new_tab = malloc(sizeof(int*) * (size + 1));
    for (int i = 0; i <= size; i++) {
        new_tab[i] = malloc(sizeof(int) * (size + 1));
        for (c = 0; c < size; c++) {
            new_tab[i][c] = (new_buffer[a] == 'o') ? 0 : 1;
            a++;
        }
        new_tab[i][c + 1] = '\n';
        a++;
    }
    return new_tab;
}

char *new_map(char **new_buf, int size)
{
    int a = 0;
    char *new_buffer = malloc(sizeof(char) * (size * size + size + 1));

    for (int i = 0; i < size; i++ ) {
        for (int j = 0; j < size; j++) {
            new_buffer[a] = new_buf[i][j];
            a = a + 1;
        }
        new_buffer[a] = '\n';
        a = a + 1;
    }
    new_buffer[a] = '\0';
    return new_buffer;
}

char **generator(int ac, char **av)
{
    int a = 0;
    int j;
    int size = my_getnbr(av[1]);
    char **new_buf = malloc(sizeof(char *) * (size + 1));

    for (int i = 0; i < size; i++) {
        new_buf[i] = malloc (sizeof(char) * (size + 1));
        for (j = 0; j < size; j++) {
            new_buf[i][j] = av[2][a];
            a++;

            if (av[2][a] == '\0')
                a = 0;
        }
        new_buf[i][j] = '\n';
        new_buf[size] = NULL;
    }
    return new_buf;
}
