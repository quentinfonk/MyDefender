/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu
*/

#include "my.h"

int check_up(my_struct_sprite *my_s, my_s_w *my_w)
{
    sfVector2f position;
    sfColor color = {0, 0, 0, 0};

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (position.x > 820 && position.x < 1060 && position.y > 550
        && position.y < 645)
        my_w->menu = 1;
    if (position.x > 820 && position.x < 1060 && position.y > 680
        && position.y < 775) {
        sfRenderWindow_clear(my_w->window, color);
        params(my_s, my_w, color);
    }
    if (position.x > 852 && position.x < 1075 && position.y > 823
        && position.y < 920)
        return (84);
    return (0);
}

void take_pos(my_s_w *my_w, my_struct_sprite *my_s)
{
    sfVector2f position;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (position.x > 852 && position.x < 1075 && position.y > 823
        && position.y < 920) {
        my_s->move = 3;
        return;
    }
    if (position.x > 828 && position.x < 1048 && position.y > 550
        && position.y < 636)
        my_s->move = 1;
    else if (position.x > 825 && position.x < 1046 && position.y > 685
        && position.y < 769)
        my_s->move = 2;
    else
        my_s->move = 0;
}

int close_wx(my_s_w *my_w, my_struct_sprite *my_s)
{
    int a = 0;

    if (sfRenderWindow_pollEvent(my_w->window, &my_w->event)) {
        if (my_w->event.type == sfEvtClosed)
            return (84);
        if (my_w->event.type == sfEvtMouseButtonPressed)
            a = check_up(my_s, my_w);
        take_pos(my_w, my_s);
    }
    if (a == 84)
        return (84);
    return (0);
}

void buttom(my_struct_sprite *my_s, my_s_w *my_w)
{
    sfIntRect rect_play = {0, 0, 400, 250};
    sfVector2f pos_play = {725, 400};
    sfIntRect rect_params = {400, 450, 800, 100};
    sfVector2f pos_params = {810, 675};
    sfVector2f pos_return = {824, 790};

    zomm(my_s, my_w, pos_play);
    sfSprite_setPosition(my_s->sprite[1], pos_play);
    sfSprite_setTextureRect(my_s->sprite[1], rect_play);
    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[1], NULL);
    sfSprite_setPosition(my_s->sprite[3], pos_params);
    sfSprite_setTextureRect(my_s->sprite[3], rect_params);
    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[3], NULL);
    sfSprite_setPosition(my_s->sprite[4], pos_return);
    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[4], NULL);
}

int menu(my_struct_sprite *my_s, my_s_w *my_w)
{
    char *str = "MyDefender";
    sfColor color = {0, 0, 0, 0};

    while (my_w->menu != 1) {
        if (close_wx(my_w, my_s) == 84)
            return (1);
        sfText_setString(my_s->texte, str);
        sfRenderWindow_drawSprite(my_w->window, my_s->sprite[0], NULL);
        buttom(my_s, my_w);
        sfRenderWindow_drawText(my_w->window, my_s->texte, NULL);
        sfRenderWindow_display(my_w->window);
        sfRenderWindow_clear(my_w->window, color);
    }
    destroy(my_s, my_w, 1);
    return (0);
}
