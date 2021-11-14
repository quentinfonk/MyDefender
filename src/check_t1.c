/*
** EPITECH PROJECT, 2020
** check
** File description:
** t_1
*/

#include "my.h"

int check_t1(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x+1 && mob.y == tower.y)
        return (1);
    if (mob.x == tower.x+1 && mob.y == tower.y+1)
        return (1);
    if (mob.x == tower.x && mob.y == tower.y+1)
        return (1);
    if (mob.x == tower.x+1 && mob.y == tower.y-1)
        return (1);
    if (mob.x == tower.x && mob.y == tower.y-1)
        return (1);
    if (mob.x == tower.x-1 && mob.y == tower.y)
        return (1);
    if (mob.x == tower.x-1 && mob.y == tower.y-1)
        return (1);
    if (mob.x == tower.x-1 && mob.y == tower.y+1)
        return (1);
    return (0);
}
