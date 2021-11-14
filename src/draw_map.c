/*
** EPITECH PROJECT, 2020
** draw
** File description:
** map
*/

#include "my.h"

int check_grass(int nb)
{
    if (nb < 100)
        return (nb);
    for (; nb > 100;)
        nb -= 100;
    return (nb);
}

void dp(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t)
{
    if (nb == 0) {
        sfSprite_setPosition(str->sprite_g_start, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_start, NULL);
    }
    if (nb == 1) {
        sfSprite_setPosition(str->sprite_g_road, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_road, NULL);
    }
    if (nb == 2) {
        sfSprite_setPosition(str->sprite_g_end, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_end, NULL);
    }
    if (nb == 3 || check_grass(nb) == 3) {
        sfSprite_setPosition(str->sprite_g_tower, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_tower, NULL);
    }
    if (nb == 4) {
        sfSprite_setPosition(str->sprite_g_grass, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_grass, NULL);
    }
    dp2(nb, str, my_w, my_t);
}
