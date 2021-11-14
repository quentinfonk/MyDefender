/*
** EPITECH PROJECT, 2020
** get_wave
** File description:
** 2
*/

#include "my.h"

void set_all_that_s(str_t_mob *str_m, int nb, int i)
{
    str_m->rect_life[i] = sfRectangleShape_create();
    str_m->rect_w[i] = sfRectangleShape_create();
    sfRectangleShape_setSize(str_m->rect_life[i], str_m->rect_size);
    sfRectangleShape_setSize(str_m->rect_w[i], str_m->rect_size);
    sfRectangleShape_setFillColor(str_m->rect_life[i], sfGreen);
    sfRectangleShape_setFillColor(str_m->rect_w[i], sfRed);
    str_m->sprite_all_mob[i] = sfSprite_create();
    str_m->info_mob[i] = (sfVector2f){str_m->pos_x, str_m->pos_y};
    sfRectangleShape_setPosition(str_m->rect_life[i], str_m->info_mob[0]);
    sfRectangleShape_setPosition(str_m->rect_w[i], str_m->info_mob[0]);
    str_m->block_tab[i] = 1;
    str_m->block_size[i] = 0;
    str_m->state_all_mob[i] = 1;
}

void set_all_that_s_1(str_t_mob *str_m, int nb, int i)
{
    int value = 1000;

    sfSprite_setTexture(str_m->sprite_all_mob[i], str_m->text_mob[0], sfFalse);
    str_m->rect_all_mob[i] = (sfIntRect){190, 0, 66, 64};
    sfSprite_setTextureRect(str_m->sprite_all_mob[i], str_m->rect_all_mob[i]);
    str_m->life_all_mob[i] = (value * (str_m->wave_total + 1));
}

void set_all_that_s_2(str_t_mob *str_m, int nb, int i)
{
    int value = 2000;

    sfSprite_setTexture(str_m->sprite_all_mob[i], str_m->text_mob[1], sfFalse);
    str_m->rect_all_mob[i] = (sfIntRect){0, 192, 64, 64};
    sfSprite_setTextureRect(str_m->sprite_all_mob[i], str_m->rect_all_mob[i]);
    str_m->life_all_mob[i] = (value * (str_m->wave_total + 1));
}

void set_all_that_s_3(str_t_mob *str_m, int nb, int i)
{
    int value = 3000;

    sfSprite_setTexture(str_m->sprite_all_mob[i], str_m->text_mob[2], sfFalse);
    str_m->rect_all_mob[i] = (sfIntRect){0, 0, 80, 62};
    sfSprite_setTextureRect(str_m->sprite_all_mob[i], str_m->rect_all_mob[i]);
    str_m->life_all_mob[i] = (value * (str_m->wave_total + 1));
}

void malloc_wave(str_t_mob *str_m)
{
    str_m->sprite_all_mob = malloc(sizeof(sfSprite*) * (str_m->nb_mob + 1));
    str_m->rect_all_mob = malloc(sizeof(sfIntRect) * (str_m->nb_mob + 1));
    str_m->info_mob = malloc(sizeof(sfVector2f) * (str_m->nb_mob + 1));
    str_m->block_size = malloc(sizeof(int) * (str_m->nb_mob + 1));
    str_m->block_tab = malloc(sizeof(int) * (str_m->nb_mob + 1));
    str_m->life_all_mob = malloc(sizeof(int) * (str_m->nb_mob + 1));
    str_m->state_all_mob = malloc(sizeof(int) * (str_m->nb_mob + 1));
    str_m->rect_life = malloc(sizeof(sfRectangleShape*) * (str_m->nb_mob + 1));
    str_m->rect_pos = malloc(sizeof(sfVector2f) * (str_m->nb_mob + 1));
    str_m->rect_w = malloc(sizeof(sfRectangleShape*) * (str_m->nb_mob + 1));

}
