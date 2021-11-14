/*
** EPITECH PROJECT, 2020
** create_mob
** File description:
** crate
*/

#include "my.h"

void get_path_biss(int size, str_t_mob *str_m, str_t *str)
{
    int line = str_m->spawn_x;
    int coll = str_m->spawn_y;

    for (int i = 1; str->map_save[line][coll + 1] != 2; i++) {
        str->path_tab[0] = 1;
        get_all_path(line, coll, str, i);
        if (str->path_tab[i] == 1) {
            coll+=1;
            continue;
        }
        if (str->path_tab[i] == 2) {
            line+=1;
            continue;
        }
        if (str->path_tab[i] == 4)
            line-=1;
        else if (str->path_tab[i] == 3)
            coll-=1;
    }
    str->path_tab[size + 1] = 1;
    str->path_tab[size + 2] = -1;
}

void get_path_mob(str_t_mob *str_m, str_t *str)
{
    int size = 0;

    for (int i = 0; i < 11; i++)
        for (int j = 0; str->map_tab[i][j+1] != -1 ; j++) {
            if (str->map_tab[i][j] == 1 || str->map_tab[i][j] == 5)
                size++;
            if (str->map_tab[i][j] == 6 || str->map_tab[i][j] == 7)
                size++;
            if (str->map_tab[i][j] == 8 || str->map_tab[i][j] == 9)
                size++;
        }
    str->path_tab = malloc(sizeof(int) * (size + 3));
    get_path_biss(size, str_m, str);
    str_m->size_map = (size+3);
}

void set_end_mob(str_t_mob *str_m, my_s_w *my_w, str_t *str)
{
    int x = 0;
    int y = 0;
    int j = 0;
    int i = 0;

    for (i = 0; i < 11; i++, y+=100)
        for (j = 0, x = 0; str->map_tab[i][j+1] != -1 ; j++, x+=100)
            if (str->map_tab[i][j] == 2) {
                str_m->end_x = x;
                str_m->end_y = y;
            }
}

void create_mob_2(my_s_w *my_w, str_t *str, str_t_mob *str_m)
{
    set_nb_block(str_m);
    set_back_mob(str_m);
    set_sprite_mob(str_m);
    set_texture_mob(str_m);
    set_spawn_mob(str_m, my_w, str);
    set_end_mob(str_m, my_w, str);
    get_path_mob(str_m, str);
    if (my_w->sound_game == 1) {
        my_w->music = sfMusic_createFromFile("Load/Roblox.ogg");
        sfMusic_play(my_w->music);
    }
}

void create_mob(my_s_w *my_w, str_t *str, str_t_mob *str_m)
{
    str_m->text_mob = malloc(sizeof(sfTexture*) * 4);
    str_m->sprite_mob = malloc(sizeof(sfSprite*) * 4);
    str_m->position_mob = malloc(sizeof(sfVector2f) * 4);
    str_m->rect_mob = malloc(sizeof(sfIntRect) * 4);
    str_m->block_nb = malloc(sizeof(int) * 7);
    str_m->temp = 1;
    str_m->block_nb[6] = -1;
    str_m->text_mob[3] = NULL;
    str_m->sprite_mob[3] = NULL;
    str_m->position_mob[3] = (sfVector2f){0, 0};
    str_m->rect_mob[3] = (sfIntRect){0, 0, 0, 0};
    str_m->clock_mob = sfClock_create();
    str_m->clock_wave = sfClock_create();
    str_m->clock_all_wave = sfClock_create();
    str_m->secure_wave = 0;
    create_mob_2(my_w, str, str_m);
}
