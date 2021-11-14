/*
** EPITECH PROJECT, 2020
** pose
** File description:
** t2
*/

#include "my.h"

int pose_t2(my_s_w *my_w, my_s_t *my_t, str_t *str, int a)
{
    if (a == 1 && my_t->money < 5)
        return (84);
    if (a == 2 && my_t->money < 15)
        return (84);
    if (a == 3 && my_t->money < 30)
        return (84);
    if (a == 4 && my_t->money < 42)
        return (84);
    if (a == 4 && my_t->time42 < 60)
        return (84);
    return (0);
}
