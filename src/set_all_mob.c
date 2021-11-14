/*
** EPITECH PROJECT, 2020
** ste_all
** File description:
** ste_all
*/

#include "my.h"

void set_spawn_mob(str_t_mob *str_m, my_s_w *my_w, str_t *str)
{
    int x = 0;
    int y = 0;
    int j = 0;
    int i = 0;

    for (i = 0; i < 11; i++, y+=100)
        for (j = 0, x = 0; str->map_tab[i][j+1] != -1 ; j++, x+=100)
            if (str->map_tab[i][j] == 0) {
                str_m->spawn_x = i;
                str_m->spawn_y = j;
                str_m->pos_y = y;
                str_m->pos_x = x;
                str_m->save_sp_x = str_m->pos_x;
                str_m->save_sp_y = str_m->pos_y;
            }
    str_m->position_mob[0] = (sfVector2f){str_m->pos_x, str_m->pos_y};
    str_m->position_mob[1] = (sfVector2f){str_m->pos_x, str_m->pos_y};
    str_m->position_mob[2] = (sfVector2f){str_m->pos_x, str_m->pos_y};
}

void set_back_mob(str_t_mob *str_m)
{
    str_m->text_mob[0] = sfTexture_createFromFile("Load/dragon.gif", NULL);
    str_m->text_mob[1] = sfTexture_createFromFile("Load/golem-walk.png", NULL);
    str_m->text_mob[2] = sfTexture_createFromFile("Load/dinos.png", NULL);
}

void set_sprite_mob(str_t_mob *str_m)
{
    str_m->sprite_mob[0] = sfSprite_create();
    str_m->sprite_mob[1] = sfSprite_create();
    str_m->sprite_mob[2] = sfSprite_create();
}

void set_texture_mob(str_t_mob *str_m)
{
    str_m->rect_mob[0] = (sfIntRect){190, 0, 66, 64};
    str_m->rect_mob[1] = (sfIntRect){0, 192, 64, 64};
    str_m->rect_mob[2] = (sfIntRect){0, 0, 80, 62};
    sfSprite_setTexture(str_m->sprite_mob[0], str_m->text_mob[0], sfFalse);
    sfSprite_setTexture(str_m->sprite_mob[1], str_m->text_mob[1], sfFalse);
    sfSprite_setTexture(str_m->sprite_mob[2], str_m->text_mob[2], sfFalse);
    str_m->wave_total = 0;
    str_m->wave_save = 1;
    str_m->temp = 0;
}

void set_nb_block(str_t_mob *str_m)
{
    str_m->block_nb[0] = 1;
    str_m->block_nb[1] = 5;
    str_m->block_nb[2] = 6;
    str_m->block_nb[3] = 7;
    str_m->block_nb[4] = 8;
    str_m->block_nb[5] = 9;
}
