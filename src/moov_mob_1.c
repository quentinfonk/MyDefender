/*
** EPITECH PROJECT, 2020
** moov
** File description:
** moov
*/

#include "my.h"

void mob_1_biss(str_t_mob *str_m, str_t *str, int tab)
{
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 3) {
        str_m->info_mob[tab].x-=7;
        str_m->rect_all_mob[tab].left = 64;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].top >= 318)
            str_m->rect_all_mob[tab].top = 0;
        str_m->rect_all_mob[tab].top += 66;
    }
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 4) {
        str_m->info_mob[tab].y-=7;
        str_m->rect_all_mob[tab].left = 128;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].top >= 318)
            str_m->rect_all_mob[tab].top = 0;
        str_m->rect_all_mob[tab].top += 66;
    }
}

void mob_1_2(str_t_mob *str_m, str_t *str, int tab)
{
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 1) {
        str_m->info_mob[tab].x+=7;
        str_m->rect_all_mob[tab].left = 198;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].top >= 318)
            str_m->rect_all_mob[tab].top = 0;
        str_m->rect_all_mob[tab].top += 66;
    }
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 2) {
        str_m->info_mob[tab].y+=7;
        str_m->rect_all_mob[tab].left = 0;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].top >= 318)
            str_m->rect_all_mob[tab].top = 0;
        str_m->rect_all_mob[tab].top += 66;
    }
}

void mob_1(str_t_mob *str_m, str_t *str, int tab)
{
    mob_1_2(str_m, str, tab);
    mob_1_biss(str_m, str, tab);
    str_m->block_size[tab]+=7;
    if (str_m->block_size[tab] >= 100) {
        str_m->block_size[tab] = 0;
        str_m->block_tab[tab] += 1;
    }
}
