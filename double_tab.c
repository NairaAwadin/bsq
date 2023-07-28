/*
** EPITECH PROJECT, 2022
** double_tableau.c
** File description:
** malloc_l_c.c
*/

#include "my.h"

int **double_tab(char const *filepath, char *buffer)
{
    int size_l = get_stline(buffer);
    int size_c = nb_column(buffer);
    int skip = skip_stline(buffer);

    int **tab = malloc(sizeof(int*) * (size_l + 1));
    for (int i = 0; i <= size_l; i++)
        tab[i] = malloc(sizeof(int) * (size_c + 1));
    for (int i = 0; i < size_l; i++, skip++) {
        for (int c = 0; c < size_c && buffer[skip] != '\0'; c++, skip++) {
            tab[i][c] = (buffer[skip] == 'o') ? 0 : 1;
        }
    }
    return tab;
}
