/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "my.h"

void destroy(my_struct_sprite *my_s, my_s_w *my_w, int q_p)
{
    for (int i = 0; my_s->text[i] != NULL; i++)
        sfTexture_destroy(my_s->text[i]);
    for (int i = 0; my_s->sprite[i] != NULL; i++)
        sfSprite_destroy(my_s->sprite[i]);
    if (q_p != 1) {
        sfRenderWindow_destroy(my_w->window);
    }
    return;
}
