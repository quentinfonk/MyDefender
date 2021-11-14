/*
** EPITECH PROJECT, 2020
** money_up
** File description:
** money 2
*/

#include "my.h"

void up_money(my_s_t *my_t)
{
    sfTime time = sfClock_getElapsedTime(my_t->money_time);
    float seconde = sfTime_asSeconds(time);

    if (seconde > 2) {
        my_t->money+=1;
        sfClock_restart(my_t->money_time);
    }
}
