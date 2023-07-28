/*
** EPITECH PROJECT, 2022
** my_algo.c
** File description:
** my_algo.c
*/

#include "my.h"

int my_algo(int **tab, int i, int y)
{
    if (i < 1 || y < 1)
        return 0;

    if (tab[i][y] == 0)
        return 0;
    int top = tab[i - 1][y];
    int left = tab[i][y - 1];
    int top_left = tab[i - 1][y - 1];
    int min = top;
    int list[3] = {top, left, top_left};

    for (int i = 0; i < 3; i++) {
        if (list[i] < min) {
            min = list[i];
        }
    }
    tab[i][y] = min + 1;
}

int loop (int i, int **tab, int size_c, my_map_t *map)
{
    for (int y = 0; y < size_c; y++) {
        my_algo(tab, i, y);
        if (map->value < tab[i][y]) {
            map->x = i - map->value;
            map->j = y - map->value;
            map->value = tab[i][y];
        }
    }
    return 0;
}

int loop_algo(int **tab, int size_l, int size_c, my_map_t *map)
{
    int i = 1;

    map->x = 0;
    map->j = 0;
    map->value = 0;
    for (; i < size_l; i++) {
        loop(i, tab, size_c, map);
    }
    return 0;
}
