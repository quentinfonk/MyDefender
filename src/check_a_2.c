/*
** EPITECH PROJECT, 2020
** check
** File description:
** a_2
*/

#include "my.h"

void check_a_6(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t3(mob, tower) == 3)
        t_f_6(my_t, str_m);
}

void check_a_7(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t1(mob, tower) == 1) {
        t_f_7(my_t, str_m);
        return;
    }
    return;
}

void check_a_8(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t2(mob, tower) == 2)
        t_f_8(my_t, str_m);
}

void check_a_9(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t3(mob, tower) == 3)
        t_f_9(my_t, str_m);
}

void check_a_10(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t)
{
    sfVector2f mob;

    mob.y = (int)((str_m->info_mob[str_m->num_mob].y + 50) / 100);
    mob.x = (int)((str_m->info_mob[str_m->num_mob].x + 50) / 100);
    if (check_t4(mob, tower) == 4)
        t_f_10(my_t, str_m);
}
