/*
** EPITECH PROJECT, 2020
** zone
** File description:
** pr
*/

#include "my.h"

void zone_(my_s_w *my_w, my_s_t *my_t, int a, sfVector2f pos)
{
    if (my_t->yn == 1) {
        if (a == 1)
            zone_1(my_w, my_t, pos);
        if (a == 2)
            zone_2(my_w, my_t, pos);
        if (a == 3)
            zone_3(my_w, my_t, pos);
        if (a == 4)
            zone_4(my_w, my_t, pos);
        pos.y += 100;
        sfSprite_setPosition(my_t->sprite_z_c, pos);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_z_c, NULL);
    }
    else {
        pos.y += 100;
        sfSprite_setPosition(my_t->sprite_zone, pos);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
}

void prz(my_s_w *my_w, my_s_t *my_t, int a, sfVector2f pos)
{
    int x = pos.x;
    int y = pos.y;

    x = (pos.x + 60) / 100;
    y = (pos.y - 40) / 100;
    pos.x = x * 100;
    pos.y = y * 100;
    zone_(my_w, my_t, a, pos);
    zone_yn(my_w, my_t);
}
