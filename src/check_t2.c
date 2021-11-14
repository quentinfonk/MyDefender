/*
** EPITECH PROJECT, 2020
** check
** File description:
** t2
*/

#include "my.h"

int check_t2_3(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x && mob.y == tower.y-2)
        return (2);
    if (mob.x == tower.x && mob.y == tower.y+2)
        return (2);
    if (mob.x == tower.x-2 && mob.y == tower.y)
        return (2);
    if (mob.x == tower.x-2 && mob.y == tower.y+1)
        return (2);
    if (mob.x == tower.x-2 && mob.y == tower.y+2)
        return (2);
    if (mob.x == tower.x-2 && mob.y == tower.y-1)
        return (2);
    if (mob.x == tower.x-2 && mob.y == tower.y-2)
        return (2);
    if (mob.x == tower.x-1 && mob.y == tower.y+2)
        return (2);
    if (mob.x == tower.x-1 && mob.y == tower.y-2)
        return (2);
    return (0);
}

int check_t2_2(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x+2 && mob.y == tower.y)
        return (2);
    if (mob.x == tower.x+2 && mob.y == tower.y+1)
        return (2);
    if (mob.x == tower.x+2 && mob.y == tower.y+2)
        return (2);
    if (mob.x == tower.x+2 && mob.y == tower.y-1)
        return (2);
    if (mob.x == tower.x+2 && mob.y == tower.y-2)
        return (2);
    if (mob.x == tower.x+1 && mob.y == tower.y+2)
        return (2);
    if (mob.x == tower.x+1 && mob.y == tower.y-2)
        return (2);
    return (check_t2_3(mob, tower));
}

int check_t2(sfVector2f mob, sfVector2f tower)
{
    if (mob.x == tower.x+1 && mob.y == tower.y)
        return (2);
    if (mob.x == tower.x+1 && mob.y == tower.y+1)
        return (2);
    if (mob.x == tower.x+1 && mob.y == tower.y-1)
        return (2);
    if (mob.x == tower.x && mob.y == tower.y-1)
        return (2);
    if (mob.x == tower.x && mob.y == tower.y-1)
        return (2);
    if (mob.x == tower.x-1 && mob.y == tower.y+1)
        return (2);
    if (mob.x == tower.x-1 && mob.y == tower.y)
        return (2);
    if (mob.x == tower.x-1 && mob.y == tower.y+1)
        return (2);
    return (check_t2_2(mob, tower));
}
