/*
** EPITECH PROJECT, 2020
** print
** File description:
** up2
*/

#include "my.h"

void print_up4(my_s_w *my_w, my_s_t *my_t, my_struct_up *up)
{
    sfIntRect rect_ame = {0, 0, 298, 700};

    if (my_t->ame_tower == 3) {
        rect_ame.left = 601;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    if (my_t->ame_tower == 4) {
        rect_ame.left = 908;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
}

void print_up3(my_s_w *my_w, my_s_t *my_t, my_struct_up *up)
{
    sfIntRect rect_ame = {0, 0, 298, 700};

    if (my_t->ame_tower == 8) {
        rect_ame.left = 2125;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    if (my_t->ame_tower == 9) {
        rect_ame.left = 2430;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    if (my_t->ame_tower == 10) {
        rect_ame.left = 2730;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    print_up4(my_w, my_t, up);
}

void print_up2(my_s_w *my_w, my_s_t *my_t, my_struct_up *up)
{
    sfIntRect rect_ame = {0, 0, 298, 700};

    if (my_t->ame_tower == 5) {
        rect_ame.left = 1210;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    if (my_t->ame_tower == 6) {
        rect_ame.left = 1515;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    if (my_t->ame_tower == 7) {
        rect_ame.left = 1820;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    print_up3(my_w, my_t, up);
}
