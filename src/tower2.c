/*
** EPITECH PROJECT, 2020
** tower
** File description:
** 2
*/

#include "my.h"

void prt2(my_s_w *my_w, my_s_t *my_t, int a, sfVector2f pos)
{
    sfIntRect rect_tower3 = {0, 200, 70, 110};
    sfIntRect rect_tower42 = {0, 310, 50, 150};

    if (a == 3) {
        sfSprite_setTextureRect(my_t->sprite, rect_tower3);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (a == 4) {
        sfSprite_setTextureRect(my_t->sprite, rect_tower42);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
}
