/*
** EPITECH PROJECT, 2020
** moov_2
** File description:
** moov2
*/

#include "my.h"

void mob_2_biss(str_t_mob *str_m, str_t *str, int tab)
{
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 3) {
        str_m->rect_all_mob[tab].top = 64;
        str_m->info_mob[tab].x-=5;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 384)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 64;
    }
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 4) {
        str_m->rect_all_mob[tab].top = 0;
        str_m->info_mob[tab].y-=5;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 384)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 64;
    }
}

void mob_2_2(str_t_mob *str_m, str_t *str, int tab)
{
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 1) {
        str_m->rect_all_mob[tab].top = 192;
        str_m->info_mob[tab].x+=5;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 384)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 64;
    }
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 2) {
        str_m->rect_all_mob[tab].top = 128;
        str_m->info_mob[tab].y+=5;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 384)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 64;
    }
}

void mob_2(str_t_mob *str_m, str_t *str, int tab)
{
    mob_2_2(str_m, str, tab);
    mob_2_biss(str_m, str, tab);
    str_m->block_size[tab]+=5;
    if (str_m->block_size[tab] >= 100) {
        str_m->block_size[tab] = 0;
        str_m->block_tab[tab]+=1;
    }
}
