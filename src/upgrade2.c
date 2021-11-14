/*
** EPITECH PROJECT, 2020
** upgrade
** File description:
** 2
*/

#include "my.h"

int nbr_place2(my_s_t *my_t, str_t *str, int x, int y)
{
    if (str->map_tab[y][x] > 800 && str->map_tab[y][x] < 900) {
        my_t->ame_tower = 8;
        return (1);
    }
    if (str->map_tab[y][x] > 900 && str->map_tab[y][x] < 1000) {
        my_t->ame_tower = 9;
        return (1);
    }
    if (str->map_tab[y][x] > 1000 && str->map_tab[y][x] < 1100) {
        my_t->ame_tower = 10;
        return (1);
    }
    if (x > 14 && y > 4)
        return (0);
    my_t->ame_tower = 0;
    return (0);
}
