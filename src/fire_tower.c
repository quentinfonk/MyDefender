/*
** EPITECH PROJECT, 2020
** fire
** File description:
** tower
*/

#include "my.h"

void bullet(sfVector2f tower, sfVector2f mob, my_s_t *my_t, my_s_w *my_w)
{
    sfVector2f position = {100, 100};

    sfSprite_setPosition(my_t->sprite_cadena, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_cadena, NULL);
}

int tower_see(my_s_t *my_t, int i)
{
    if (i > 100 && i < 200)
        return (1);
    if (i > 200 && i < 300)
        return (2);
    if (i > 300 && i < 400)
        return (3);
    if (i > 400 && i < 500)
        return (4);
    if (i > 500 && i < 600)
        return (5);
    if (i > 600 && i < 700)
        return (6);
    if (i > 700 && i < 800)
        return (7);
    if (i > 800 && i < 900)
        return (8);
    if (i > 900 && i < 1000)
        return (9);
    if (i > 1000 && i < 1100)
        return (10);
    return (0);
}

void tower_ch_3(my_s_t *my_t, str_t *str, str_t_mob *str_m, sfVector2f tower)
{
    int i = tower.y;
    int o = tower.x;

    if (tower_see(my_t, str->map_tab[i][o]) == 7)
        check_a_7(tower, str_m, my_t);
    if (tower_see(my_t, str->map_tab[i][o]) == 8)
        check_a_8(tower, str_m, my_t);
    if (tower_see(my_t, str->map_tab[i][o]) == 9)
        check_a_9(tower, str_m, my_t);
    if (tower_see(my_t, str->map_tab[i][o]) == 10)
        check_a_10(tower, str_m, my_t);
}

void tower_ch_2(my_s_t *my_t, str_t *str, str_t_mob *str_m, int i)
{
    sfVector2f tower;

    for (int o = 0; str->map_tab[i][o] != -1; o++) {
        tower.x = o;
        tower.y = i;
        if (tower_see(my_t, str->map_tab[i][o]) == 1)
            check_a(tower, str_m, my_t);
        if (tower_see(my_t, str->map_tab[i][o]) == 2)
            check_a_2(tower, str_m, my_t);
        if (tower_see(my_t, str->map_tab[i][o]) == 3)
            check_a_3(tower, str_m, my_t);
        if (tower_see(my_t, str->map_tab[i][o]) == 4)
            check_a_4(tower, str_m, my_t);
        if (tower_see(my_t, str->map_tab[i][o]) == 5)
            check_a_5(tower, str_m, my_t);
        if (tower_see(my_t, str->map_tab[i][o]) == 6)
            check_a_6(tower, str_m, my_t);
        tower_ch_3(my_t, str, str_m, tower);
    }
}

void tower_ch(my_s_w *my_w, my_s_t *my_t, str_t *str, str_t_mob *str_m)
{
    for (int i = 0; i != 11; i++) {
        tower_ch_2(my_t, str, str_m, i);
    }
}
