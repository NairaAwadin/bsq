/*
** EPITECH PROJECT, 2023
** getnbr
** File description:
** getnbr
*/

#include "my.h"

int get_nb(char c, int nb)
{
    if (c == '-' || c == '+')
        return nb;
    nb = nb * 10 + c - '0';
    return nb;
}

int get_sign(char c, int s)
{
    if (c == '-') {
        s = s * -1;
    }
    return s;
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int s = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9' ||
        str[i] == '-' || str[i] == '+')) {
            return nb * s;
        }
        nb = get_nb(str[i], nb);
        s = get_sign(str[i], s);
    }
    nb = nb * s;
    return nb;
}
