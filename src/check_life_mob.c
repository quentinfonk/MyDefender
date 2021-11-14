/*
** EPITECH PROJECT, 2020
** mob life
** File description:
** *
*/

#include "my.h"

void check_life_mob(str_t_mob *str_m, str_t *str, int i)
{
    int wave_count = 0;

    for (int a = 0; a < str_m->temp; a++) {
        if (str_m->life_all_mob[a] <= 0)
            str_m->state_all_mob[a] = 0;
        if (str_m->state_all_mob[a] == 0 || str_m->state_all_mob[a] == 2) {
            wave_count++;
            if (wave_count  == str_m->nb_mob && str_m->wave_save == 0)
                str_m->wave_save = 1;
        }
    }
}

void check_l(str_t_mob *str_m, str_t *str, int i, my_s_w *my_w)
{
    if (str_m->block_tab[i] < str_m->size_map &&
    (str->path_tab[str_m->block_tab[i]] == -1 &&
    str_m->state_all_mob[i] == 1)) {
        if (str_m->type_all_mob[i] == 1 && str_m->life_casle > 0) {
            str_m->life_casle -= 20;
            str_m->state_all_mob[i] = 2;
        }
        if (str_m->type_all_mob[i] == 2 && str_m->life_casle > 0) {
            str_m->life_casle -= 50;
            str_m->state_all_mob[i] = 2;
        }
        if (str_m->type_all_mob[i] == 3 && str_m->life_casle > 0) {
            str_m->life_casle -= 80;
            str_m->state_all_mob[i] = 2;
        }
        if (str_m->life_casle == 0)
            loose(str, my_w);
        if (str->max_wave != -1 && str_m->wave_total == str->max_wave)
            win(str, my_w, str_m);
    }
}

void check_casle(str_t_mob *str_m, str_t *str, int i, my_s_w *my_w)
{
    for (int i = 0; i < str_m->temp; i++) {
        check_l(str_m, str, i, my_w);
    }
}

void set_life(str_t_mob *str_m, int i, str_t *str)
{
    float life  = 0;
    float temp = (str_m->wave_total);

    for (int a = 0; a < str_m->temp; a++) {
        if (str_m->type_all_mob[a] == 1) {
            life = (str_m->life_all_mob[a]/(20));
            str_m->rect_size = (sfVector2f){(life / str_m->wave_total), 10};
            sfRectangleShape_setSize(str_m->rect_life[a], str_m->rect_size);
        }
        if (str_m->type_all_mob[a] == 2) {
            life = (str_m->life_all_mob[a]/(40));
            str_m->rect_size = (sfVector2f){(life / str_m->wave_total), 10};
            sfRectangleShape_setSize(str_m->rect_life[a], str_m->rect_size);
        }
        if (str_m->type_all_mob[a] == 3) {
            life = (str_m->life_all_mob[a]/(60));
            str_m->rect_size = (sfVector2f){(life / str_m->wave_total), 10};
            sfRectangleShape_setSize(str_m->rect_life[a], str_m->rect_size);
        }
    }
}
