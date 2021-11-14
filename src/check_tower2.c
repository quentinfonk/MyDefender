/*
** EPITECH PROJECT, 2020
** chexk
** File description:
** tower2
*/

#include "my.h"

void print_t(my_s_w *my_w, my_s_t *my_t, int a)
{
    sfVector2f position;
    sfIntRect rect_tower1 = {0, 0, 70, 100};
    sfIntRect rect_tower2 = {0, 100, 70, 100};

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x - 60;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y - 60;
    prz(my_w, my_t, a, position);
    sfSprite_setPosition(my_t->sprite, position);
    if (a == 1) {
        sfSprite_setTextureRect(my_t->sprite, rect_tower1);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (a == 2) {
        sfSprite_setTextureRect(my_t->sprite, rect_tower2);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    prt2(my_w, my_t, a, position);
}

int check_pos(my_s_w *my_w, my_s_t *my_t)
{
    sfVector2f position;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (position.x > 1617 && position.x < 1660 && position.y > 197
        && position.y < 250)
        return (1);
    if (position.x > 1615 && position.x < 1658 && position.y > 265
        && position.y < 328)
        return (2);
    if (position.x > 1615 && position.x < 1650 && position.y > 338
        && position.y < 401)
        return (3);
    if (position.x > 1621 && position.x < 1642 && position.y > 401
        && position.y < 491)
        if (my_t->time42 > 60)
            return (4);
    return (0);
}

void price(my_s_t *my_t, int a)
{
    if (a == 1)
        my_t->money -= 5;
    if (a == 2)
        my_t->money -= 15;
    if (a == 3)
        my_t->money -= 30;
    if (a == 10)
        my_t->money -= 42;
}

int pose_t(my_s_w *my_w, my_s_t *my_t, str_t *str, int a)
{
    sfVector2f position;
    int x = 0;
    int y = 0;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    x = position.x / 100;
    y = position.y / 100;
    if (pose_t2(my_w, my_t, str, a) == 84)
        return (0);
    if (a == 4)
        a += 6;
    if (str->map_tab[y][x] < 100 && str->map_tab[y][x] == 3) {
        str->map_tab[y][x] = ((a*100) + str->map_tab[y][x]);
        price(my_t, a);
    }
    return (0);
}
