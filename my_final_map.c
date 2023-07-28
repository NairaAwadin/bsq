/*
** EPITECH PROJECT, 2022
** my_final_map.c
** File description:
** final map
*/

#include "my.h"

char **final_map(const char *filepath, char *buffer, my_map_t *map)
{
    int size_l = get_stline(buffer);
    int size_c = nb_column(buffer);
    int skip = skip_stline(buffer);
    char **buf = malloc(sizeof(char*) * size_l + 1);
    int i = 0;
    for (i = 0; i < size_l; i++) {
        buf[i] = malloc(sizeof(char) * (size_c + 1));
    }
    for (int x = 0; x < size_l; x++) {
        for (int y = 0; y <= size_c && (buffer[skip] != '\0'); y++) {
            buf[x][y] = buffer[skip];
            skip++;
        }
    }
    return buf;
}

void display_final_map(char **buf, my_map_t *map)
{
    int nb = map->value;
    int x = map->x;
    int j = map->j;

    for (int a = 0; a != nb; a++) {
        for (int b = 0; b != nb; b++) {
            buf[x][j] = (buf[x][j] == '.') ? 'x' : '.';
            j++;
        }
        j = map->j;
        x++;
    }
    for (int a = 0; buf[a] != NULL; a++)
        my_putstr(buf[a]);
}
