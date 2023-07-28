/*
** EPITECH PROJECT, 2022
** my_bsq.c
** File description:
** bsq.c
*/

#include "my.h"

char *open_map(const char *filepath)
{
    struct stat buf;
    stat(filepath, &buf);
    int size = buf.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    int fd = open(filepath, O_RDONLY);
    int i = read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return buffer;
}

int skip_stline(char *buffer)
{
    int x = 0;
    while (buffer[x] != '\n') {
        x++;
    }
    return (x + 1);

}
