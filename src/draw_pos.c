/*
** EPITECH PROJECT, 2020
** draw
** File description:
** pos
*/

#include "my.h"

void draw_pos_biss(int nb, str_t *str, my_s_w *my_w)
{
    if (nb == 5) {
        sfSprite_setPosition(str->sprite_g_up, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_up, NULL);
    }
    if (nb == 6) {
        sfSprite_setPosition(str->sprite_g_an_ri_up, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_an_ri_up, NULL);
    }
    if (nb == 7) {
        sfSprite_setPosition(str->sprite_g_an_ri_do, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_an_ri_do, NULL);
    }
    if (nb == 8) {
        sfSprite_setPosition(str->sprite_g_an_le_up, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_an_le_up, NULL);
    }
    if (nb == 9) {
        sfSprite_setPosition(str->sprite_g_an_le_do, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_an_le_do, NULL);
    }
}

void draw_pos(int nb, str_t *str, my_s_w *my_w)
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
    if (nb == 3) {
        sfSprite_setPosition(str->sprite_g_tower, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_tower, NULL);
    }
    if (nb == 4) {
        sfSprite_setPosition(str->sprite_g_grass, str->position_ground);
        sfRenderWindow_drawSprite(my_w->window, str->sprite_g_grass, NULL);
    }
}
