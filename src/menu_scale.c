/*
** EPITECH PROJECT, 2020
** sclae
** File description:
** scale
*/

#include "my.h"

void zomm(my_struct_sprite *my_s, my_s_w *my_w, sfVector2f pos_play)
{
    sfVector2f scale = {1.1, 1.1};
    sfVector2f scale_o = {1, 1};

    if (my_s->move == 3) {
        sfSprite_setScale(my_s->sprite[4], scale);
        return;
    }
    if (my_s->move == 1)
        sfSprite_setScale(my_s->sprite[1], scale);
    else if (my_s->move == 2)
        sfSprite_setScale(my_s->sprite[3], scale);
    else {
        sfSprite_setScale(my_s->sprite[1], scale_o);
        sfSprite_setScale(my_s->sprite[3], scale_o);
        sfSprite_setScale(my_s->sprite[4], scale_o);
    }
}
