/*
** EPITECH PROJECT, 2020
** check
** File description:
** a_1
*/

#include "my.h"

void check_a(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t1(mob, tower) == 1) {
        t_f_1(my_t, str_m);
        return;
    }
    return;
}

int check_a_2(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t2(mob, tower) == 2)
        t_f_2(my_t, str_m);
}

int check_a_3(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t3(mob, tower) == 3)
        t_f_3(my_t, str_m);
}

void check_a_4(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t1(mob, tower) == 1) {
        t_f_4(my_t, str_m);
        return;
    }
    return;
}

void check_a_5(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t2(mob, tower) == 2)
        t_f_5(my_t, str_m);
}
