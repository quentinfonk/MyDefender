/*
** EPITECH PROJECT, 2020
** draw
** File description:
** gra2
*/

#include "my.h"

void tower_42_pr(my_s_w *my_w, my_s_t *my_t, str_t *str)
{
    static sfIntRect rect_tower42 = {180, 310, 50, 150};

    str->position_ground.x += 20;
    str->position_ground.y -= 25;
    sfSprite_setPosition(my_t->sprite, str->position_ground);
    sfSprite_setTextureRect(my_t->sprite, rect_tower42);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
}
