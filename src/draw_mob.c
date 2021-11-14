/*
** EPITECH PROJECT, 2020
** draw_mob
** File description:
** mob
*/

#include "my.h"

void set_pos(str_t_mob *str_m, str_t *str, int i)
{
    for (int i = 0; i < str_m->temp; i++) {
        if (str_m->type_all_mob[i] == 1)
            mob_1(str_m, str, i);
        if (str_m->type_all_mob[i] == 2)
            mob_2(str_m, str, i);
        if (str_m->type_all_mob[i] == 3)
            mob_3(str_m, str, i);
        str_m->info_mob[i].x += 8;
        str_m->info_mob[i].y -= 10;
        sfRectangleShape_setPosition(str_m->rect_w[i], str_m->info_mob[i]);
        sfRectangleShape_setPosition(str_m->rect_life[i], str_m->info_mob[i]);
        str_m->info_mob[i].x -= 8;
        str_m->info_mob[i].y += 10;
    }
}

void get_wave(str_t_mob *str_m, my_s_w *my_w, str_t *str)
{
    sfTime time = sfClock_getElapsedTime(str_m->clock_wave);
    float seconde = sfTime_asSeconds(time);

    if (seconde > 3) {
        str_m->temp+=1;
        sfClock_restart(str_m->clock_wave);
    }
}

void set_rect_mob(str_t_mob *str_m, my_s_w *my_w, str_t *str, int i)
{
    sfTime time = sfClock_getElapsedTime(str_m->clock_mob);
    sfTime time_test = sfClock_getElapsedTime(str_m->clock_test);
    float seconde = sfTime_asSeconds(time);
    float seconde_test = sfTime_asSeconds(time_test);
    static int tab = 0;

    if (str_m->secure_wave == 1) {
        tab = 0;
        str_m->secure_wave = 0;
    }
    if (seconde > 0.09) {
        set_pos(str_m, str, tab);
        sfClock_restart(str_m->clock_mob);
        if (tab < str_m->temp)
            tab++;
        if (tab == str_m->temp)
            tab = 0;
    }
}

void set_position_mob(str_t_mob *str_m, my_s_w *my_w, int i, str_t *str)
{
    sfSprite_setPosition(str_m->sprite_all_mob[i], str_m->info_mob[i]);
    if ((str_m->block_tab[i] < str_m->size_map &&
            (str->path_tab[str_m->block_tab[i]] == 1 ||
            str->path_tab[str_m->block_tab[i]] == 2 ||
            str->path_tab[str_m->block_tab[i]] == 3 ||
            str->path_tab[str_m->block_tab[i]] == 4) &&
            str_m->state_all_mob[i] == 1) && str->end == -1) {
        sfRenderWindow_drawSprite(my_w->window,
        str_m->sprite_all_mob[i], NULL);
        sfRenderWindow_drawRectangleShape(my_w->window,
        str_m->rect_w[i], NULL);
        sfRenderWindow_drawRectangleShape(my_w->window,
        str_m->rect_life[i], NULL);
    }
    choose_end(str, my_w);
}

void draw_mob(str_t *str, my_s_w *my_w, str_t_mob *str_m, my_s_t *my_t)
{
    if (str_m->temp < str_m->nb_mob)
        get_wave(str_m, my_w, str);
    for (int i = 0; i < str_m->temp; i++) {
        tower_ch(my_w, my_t, str, str_m);
        str_m->num_mob = i;
        check_casle(str_m, str, i, my_w);
        check_life_mob(str_m, str, i);
        set_rect_mob(str_m, my_w, str, i);
        set_life(str_m, i, str);
        set_position_mob(str_m, my_w, i, str);
    }
}
