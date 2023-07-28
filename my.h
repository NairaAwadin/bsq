/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/stat.h>

typedef struct my_map_s {
    int x;
    int j;
    int value;
}my_map_t;


void  my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int get_nb(char c, int nb);
int get_sign(char c, int s);
int my_getnbr(char const *str);

char *open_map(char const *filepath);
int skip_stline(char *buffer);
int get_stline(char *buffer);
int nb_column(char *buffer);
int **double_tab(char const *filepath, char *buffer);
int my_algo(int **tab, int i, int y);
int loop (int i, int **tab, int size_c, my_map_t *map);
int loop_algo(int **tab, int size_l, int size_c, my_map_t *map);
char **final_map(const char *filepath, char *buffer, my_map_t *map);
void display_final_map(char **buf, my_map_t *map);
int execute_algo(int ac, char **av, char *buffer);

char **generator(int ac, char **av);
int **new_double_tab(char *new_buf, int size);
char *new_map(char **new_buf, int size);
int execute_generator(int ac, char **av);
#endif
