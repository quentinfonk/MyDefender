/*
** EPITECH PROJECT, 2020
** get_wave
** File description:
** 3
*/

#include "my.h"

void feel_tab_wave(str_t_mob *str_m, int nb)
{
    str_m->rect_size = (sfVector2f){50, 10};
    for (int i = 0; i < str_m->nb_mob; i++) {
        set_all_that_s(str_m, nb, i);
        if (str_m->type_all_mob[i] == 1) {
            set_all_that_s_1(str_m, nb, i);
            continue;
        }
        if (str_m->type_all_mob[i] == 2) {
            set_all_that_s_2(str_m, nb, i);
            continue;
        }
        if (str_m->type_all_mob[i] == 3) {
            set_all_that_s_3(str_m, nb, i);
            continue;
        }
    }
}

void feel_last_tab_wave(str_t_mob *str_m)
{
    str_m->sprite_all_mob[str_m->nb_mob] = NULL;
    str_m->rect_life[str_m->nb_mob] = NULL;
    str_m->rect_w[str_m->nb_mob] = NULL;
    str_m->rect_all_mob[str_m->nb_mob] = (sfIntRect){0, 0, 0, 0};
    str_m->info_mob[str_m->nb_mob] = (sfVector2f){0, 0};
    str_m->block_size[str_m->nb_mob] = -1;
    str_m->block_tab[str_m->nb_mob] = -1;
    str_m->state_all_mob[str_m->nb_mob] = -1;
    str_m->life_all_mob[str_m->nb_mob] = -1;
    str_m->clock_test = sfClock_create();
}

void create_wave(str_t_mob *str_m, int nb)
{
    malloc_wave(str_m);
    feel_tab_wave(str_m, nb);
    feel_last_tab_wave(str_m);
}

void destroy_all_mob(str_t_mob *str_m)
{
    for (int i = 0; i < str_m->nb_mob; i++) {
        sfSprite_destroy(str_m->sprite_all_mob[i]);
    }
    free(str_m->sprite_all_mob);
    free(str_m->rect_all_mob);
    free(str_m->type_all_mob);
    free(str_m->block_size);
    free(str_m->block_tab);
    free(str_m->info_mob);
    free(str_m->life_all_mob);
    free(str_m->state_all_mob);
    str_m->nb_mob = 0;
    str_m->temp = 0;
}

int rand_1(str_t_mob *str_m, int nb, int count)
{
    nb -= 2;
    str_m->type_all_mob[count] = 1;
    str_m->nb_mob+=1;
    return (nb);
}
