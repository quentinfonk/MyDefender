/*
** EPITECH PROJECT, 2020
** upgrade
** File description:
** upgrade
*/

#include "my.h"

int nbr_place(my_s_t *my_t, str_t *str, int x, int y)
{
    sfIntRect position;

    if (str->map_tab[y][x] > 500 && str->map_tab[y][x] < 600) {
        my_t->ame_tower = 5;
        return (1);
    }
    if (str->map_tab[y][x] > 600 && str->map_tab[y][x] < 700) {
        my_t->ame_tower = 6;
        return (1);
    }
    if (str->map_tab[y][x] > 700 && str->map_tab[y][x] < 800) {
        my_t->ame_tower = 7;
        return (1);
    }
    return (nbr_place2(my_t, str, x, y));
}

int check_upg(my_s_t *my_t, str_t *str, int x, int y)
{
    if (str->map_tab[y][x] > 100 && str->map_tab[y][x] < 200) {
        my_t->ame_tower = 1;
        return (1);
    }
    if (str->map_tab[y][x] > 200 && str->map_tab[y][x] < 300) {
        my_t->ame_tower = 2;
        return (1);
    }
    if (str->map_tab[y][x] > 300 && str->map_tab[y][x] < 400) {
        my_t->ame_tower = 3;
        return (1);
    }
    if (str->map_tab[y][x] > 400 && str->map_tab[y][x] < 500) {
        my_t->ame_tower = 4;
        return (1);
    }
    return (nbr_place(my_t, str, x, y));
}

void check_ame_tower(my_s_w *my_w, my_s_t *my_t, str_t *str)
{
    sfVector2f position;
    int x = 0;
    int y = 0;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    x = position.x / 100;
    y = position.y / 100;
    if (check_upg(my_t, str, x, y) == 1) {
            my_t->pos_click.x = x;
            my_t->pos_click.y = y;
    }
}

int cy(my_s_w *my_w, my_s_t *my_t)
{
    if (price_up(my_t) == 0)
        return (0);
    return (1);
}

void pr_ame_tower(my_s_w *my_w, my_s_t *my_t, str_t *str)
{
    sfVector2f position;
    int x = my_t->pos_click.x;
    int y = my_t->pos_click.y;
    int a = 20;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (my_t->ame_tower != 0 && position.x > 1600 && position.x < 1800)
        if (position.y > 750 && position.y > 900 && str->map_tab[y][x] < 970)
            a = cy(my_w, my_t);
    if (a == 0) {
        str->map_tab[y][x] += 300;
        my_t->ame_tower += 3;
    }
}
