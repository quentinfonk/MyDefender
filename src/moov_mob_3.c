/*
** EPITECH PROJECT, 2020
** moov_3
** File description:
** moov3
*/

#include "my.h"

void mob_3_biss(str_t_mob *str_m, str_t *str, int tab)
{
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 3) {
        str_m->info_mob[tab].x-=3;
        str_m->rect_all_mob[tab].top = 62;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 400)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 80;
    }
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 4) {
        str_m->info_mob[tab].y-=3;
        str_m->rect_all_mob[tab].top = 186;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 400)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 80;
    }
}

void mob_3_2(str_t_mob *str_m, str_t *str, int tab)
{
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 1) {
        str_m->rect_all_mob[tab].top = 0;
        str_m->info_mob[tab].x+=3;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 400)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 80;
    }
    if (str_m->block_tab[tab] < str_m->size_map
        && str->path_tab[str_m->block_tab[tab]] == 2) {
        str_m->info_mob[tab].y+=3;
        str_m->rect_all_mob[tab].top = 124;
        sfSprite_setTextureRect(str_m->sprite_all_mob[tab],
        str_m->rect_all_mob[tab]);
        if (str_m->rect_all_mob[tab].left >= 400)
            str_m->rect_all_mob[tab].left = 0;
        str_m->rect_all_mob[tab].left += 80;
    }
}

void mob_3(str_t_mob *str_m, str_t *str, int tab)
{
    mob_3_2(str_m, str, tab);
    mob_3_biss(str_m, str, tab);
    str_m->block_size[tab]+=3;
    if (str_m->block_size[tab] >= 100) {
        str_m->block_size[tab] = 0;
        str_m->block_tab[tab]+=1;
    }
}
