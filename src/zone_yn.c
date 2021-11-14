/*
** EPITECH PROJECT, 2020
** yes
** File description:
** no
*/

#include "my.h"

void zone_yn(my_s_w *my_w, my_s_t *my_t)
{
    sfVector2f position;
    int x = 0;
    int y = 0;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    x = position.x / 100;
    y = position.y / 100;
    if (my_t->tab_zo[y][x] < 100 && my_t->tab_zo[y][x] == 3)
        my_t->yn = 1;
    else
        my_t->yn = 0;
}
