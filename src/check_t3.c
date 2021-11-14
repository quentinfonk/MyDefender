/*
** EPITECH PROJECT, 2020
** check
** File description:
** t3
*/

#include "my.h"

int check_t4(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x+1 && mob.y == tower.y)
        return (4);
    if (mob.x == tower.x && mob.y == tower.y+1)
        return (4);
    if (mob.x == tower.x && mob.y == tower.y-1)
        return (4);
    if (mob.x == tower.x-1 && mob.y == tower.y)
        return (4);
}

int check_t3_2(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x+2 && mob.y == tower.y)
        return (3);
    if (mob.x == tower.x && mob.y == tower.y+2)
        return (3);
    if (mob.x == tower.x && mob.y == tower.y-2)
        return (3);
    if (mob.x == tower.x-2 && mob.y == tower.y)
        return (3);
}

int check_t3(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x+1 && mob.y == tower.y)
        return (3);
    if (mob.x == tower.x+1 && mob.y == tower.y+1)
        return (3);
    if (mob.x == tower.x+1 && mob.y == tower.y-1)
        return (3);
    if (mob.x == tower.x && mob.y == tower.y-1)
        return (3);
    if (mob.x == tower.x && mob.y == tower.y+1)
        return (3);
    if (mob.x == tower.x-1 && mob.y == tower.y+1)
        return (3);
    if (mob.x == tower.x-1 && mob.y == tower.y-1)
        return (3);
    if (mob.x == tower.x-1 && mob.y == tower.y)
        return (3);
    check_t3_2(mob, tower);
    return (0);
}
