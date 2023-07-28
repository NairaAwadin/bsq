/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

int execute_algo(int ac, char **av, char *buffer)
{
    my_map_t *map = malloc (sizeof(my_map_t));
    int size_l = get_stline(buffer);
    char **buf = final_map(av[1], buffer, map);
    int **tab = double_tab(av[1], buffer);
    int size_c = nb_column(buffer);

    loop_algo(tab, size_l, size_c, map);
    display_final_map(buf, map);
    return 0;
}

int execute_generator(int ac, char **av)
{
    my_map_t *gen = malloc (sizeof(my_map_t));
    int size = my_getnbr(av[1]);
    if (size <= 0)
        return 84;
    char **genn = generator(ac, av);
    char *new_buffer = new_map(genn, size);
    int **new_tab = new_double_tab(new_buffer, size);

    loop_algo(new_tab, size, size, gen);
    display_final_map(genn, gen);
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2 && ac != 3)
        return 84;

    if (ac == 2) {
        char *buffer = open_map(av[1]);
        if (my_strlen(buffer) == 0)
            return 84;
        execute_algo(ac, av, buffer);
    }
    if (ac == 3) {
        execute_generator(ac, av);
    }
}
