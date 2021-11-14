/*
** EPITECH PROJECT, 2020
** pause
** File description:
** pause
*/

#include "my.h"

int check_cli(my_s_w *my_w, m_p *my_p, int *a)
{
    sfVector2f position;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (position.x > 0 && position.x < 100 && position.y > 0
        && position.y < 100)
        (*a) = 1;
}

int close_pause(my_s_w *my_w, m_p *my_p, int *a)
{
    if (sfRenderWindow_pollEvent(my_w->window, &my_p->event_pause)) {
        if (my_p->event_pause.type == sfEvtClosed)
            return (84);
        if (my_p->event_pause.type == sfEvtMouseButtonPressed)
            check_cli(my_w, my_p, a);
    }
}

int paus(my_s_t *my_t, m_p *my_p, my_s_w *my_w, str_t *str)
{
    int a = 0;

    while (a == 0) {
        if (close_pause(my_w, my_p, &a) == 84) {
            str->game = 1;
            return (1);
        }
    }
    return (0);
}
