/*
** EPITECH PROJECT, 2020
** check
** File description:
** tower
*/

#include "my.h"

int cec_pa(my_s_w *my_w)
{
    sfVector2f pos;

    pos.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    pos.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (pos.x > 776 && pos.x < 1000 && pos.y > 415 && pos.y < 500)
        return (10);
    return (0);
}

int che_pa(my_s_w *my_w, my_s_t *my_t, sfEvent ev_pau)
{
    while (sfRenderWindow_pollEvent(my_w->window, &ev_pau)) {
        if (ev_pau.type == sfEvtClosed) {
            sfRenderWindow_close(my_w->window);
            return (1);
        }
        if (ev_pau.type == sfEvtMouseButtonPressed) {
            return (cec_pa(my_w));
        }
    }
    return (0);
}

int paus_p(my_s_w *my_w, my_s_t *my_t)
{
    sfEvent ev_pau;
    sfVector2f pos = {700, 400};
    sfIntRect paus = {200, 0, 1000, 1000};

    sfSprite_setTextureRect(my_t->sprite_cadena, paus);
    sfSprite_setPosition(my_t->sprite_cadena, pos);
    for (int a = 0, i = 0; 1;) {
        a = che_pa(my_w, my_t, ev_pau);
        for (;i == 0; i++) {
            sfRenderWindow_drawSprite(my_w->window, my_t->sprite_cadena, NULL);
            sfRenderWindow_display(my_w->window);
        }
        if (a == 1)
            return (1);
        if (a != 0) {
            paus.left = 0;
            sfSprite_setTextureRect(my_t->sprite_cadena, paus);
            return (0);
        }
    }
    return (0);
}

void key(my_s_w *my_w, my_s_t *my_t, str_t *str)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
        if (paus_p(my_w, my_t) == 1)
            str->game = 1;
}

void close_tower(my_s_w *my_w, my_s_t *my_t, str_t *str)
{
    static int a = 0;

    while (sfRenderWindow_pollEvent(my_w->window, &str->event)) {
        if (str->event.type == sfEvtClosed) {
            sfRenderWindow_close(my_w->window);
            str->game = 1;
        }
        if (str->event.type == sfEvtMouseButtonPressed) {
            pr_ame_tower(my_w, my_t, str);
            a = check_pos(my_w, my_t);
            check_ame_tower(my_w, my_t, str);
        }
        if (str->event.type == sfEvtKeyPressed)
            key(my_w, my_t, str);
        if (str->event.type == sfEvtMouseButtonReleased && a != 0) {
            a = pose_t(my_w, my_t, str, a);
        }
    }
    if (a != 0)
        print_t(my_w, my_t, a);
}
