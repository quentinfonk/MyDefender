/*
** EPITECH PROJECT, 2020
** get_all_wave
** File description:
** get_wave
*/

#include "my.h"

int rand_2(str_t_mob *str_m, int nb, int count)
{
    nb -= 4;
    str_m->type_all_mob[count] = 2;
    str_m->nb_mob+=1;
    return (nb);
}

int rand_3(str_t_mob *str_m, int nb, int count)
{
    nb -= 6;
    str_m->type_all_mob[count] = 3;
    str_m->nb_mob+=1;
    return (nb);
}

void get_nb_wave(str_t_mob *str_m, int nb)
{
    sfTime time = sfClock_getElapsedTime(str_m->clock_all_wave);
    float seconde = sfTime_asMicroseconds(time);
    int a = 0, count = 0, save_nb = 0;

    srand(seconde);
    for (count = 0; nb >= 0; count++) {
        a = (rand()% (6)) + 1;
        if (a == 1 || a == 2 || a == 3)
            nb = rand_1(str_m, nb, count);
        if (a == 4 || a == 5)
            nb = rand_2(str_m, nb, count);
        if (a == 6)
            nb = rand_3(str_m, nb, count);
    }
    for (; count <= save_nb; count++)
        str_m->type_all_mob[count] = -1;
}

void get_all_wave(str_t_mob  *str_m)
{
    static int nb = 10;
    static int wave = 0;

    if (str_m->wave_total >= 1)
        destroy_all_mob(str_m);
    str_m->type_all_mob = malloc(sizeof(int) * (nb + 1));
    str_m->nb_mob = 0;
    get_nb_wave(str_m, nb);
    create_wave(str_m, nb);
    str_m->wave_total += 1;
    str_m->wave_save = 0;
    str_m->secure_wave = 1;
    nb = (nb * 1.5);
}
