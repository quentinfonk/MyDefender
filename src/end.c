/*
** EPITECH PROJECT, 2020
** loose
** File description:
** loose/win
*/

#include "my.h"

void choose_end(str_t *str, my_s_w *my_w)
{
    if (str->end == 1)
        sfRenderWindow_drawSprite(my_w->window, str->sprite_loose, NULL);
    if (str->end == 0)
        sfRenderWindow_drawSprite(my_w->window, str->sprite_win, NULL);
}

void loose(str_t *str, my_s_w *my_w)
{
        str->end = 1;
}

void win(str_t *str, my_s_w *my_w, str_t_mob *str_m)
{
    int temp = 0;

    for (int i = 0; i < str_m->temp; i++) {
        if (str_m->state_all_mob[i] == 0 || str_m->state_all_mob[i] == 2)
            temp++;
        if (temp == str_m->nb_mob) {
            str->end = 0;
        }
    }
    return;
}

