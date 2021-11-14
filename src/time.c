/*
** EPITECH PROJECT, 2020
** time
** File description:
** time
*/

#include "my.h"

char *time_calc(char *str, int time, int i, int o)
{
    for (i = time; i >= 60; i -= 60, o++);
    if (o <= 10) {
        str[0] = '0';
        str[1] = o + 48;
    }
    else {
        str[0] = o/10;
        str[1] = o%10;
    }
    str[2] = ':';
    for (o = 0; i >= 10; i -= 10, o++);
    if (o >= 0) {
        str[3] = o + 48;
        str[4] = i + 48;
    }
    else {
        str[3] = '0';
        str[4] = time + 48;
    }
    str[5] = '\0';
    return (str);
}

void ptm(my_s_w *my_w, my_s_t *my_t, my_s_s *my_st)
{
    char *str;
    static int time = 0;
    int o = 0;
    static int a;
    int i = 0;

    if (a != 0) {
        free(str);
        a++;
    }
    str = malloc(sizeof(char) * 6);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(my_st->clock_t)) > 1000) {
        time++;
        sfClock_restart(my_st->clock_t);
    }
    str = time_calc(str, time, i, o);
    sfText_setString(my_st->texte, str);
    sfRenderWindow_drawText(my_w->window, my_st->texte, NULL);
    my_t->time42 = time;
}

void style_print(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w)
{
    ptm(my_w, my_t, my_st);
}
