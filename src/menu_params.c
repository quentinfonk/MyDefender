/*
** EPITECH PROJECT, 2020
** menu
** File description:
** params
*/

#include "my.h"

int params_check(my_s_w *my_w, my_struct_sprite *my_s)
{
    sfVector2f position;
    sfColor color = {0, 0, 0, 0};

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (position.x > 520 && position.x < 750 && position.y > 450
        && position.y < 575) {
        if (my_w->sound_game == 1)
            my_w->sound_game = 0;
        else if (my_w->sound_game == 0)
            my_w->sound_game = 1;
    }
    if (position.x > 820 && position.x < 1060 && position.y > 680
        && position.y < 775) {
        sfRenderWindow_clear(my_w->window, color);
        return (1);
    }
    return (0);
}

int close_params(my_s_w *my_w, my_struct_sprite *my_s)
{
    while (sfRenderWindow_pollEvent(my_w->window, &my_w->event)) {
        if (my_w->event.type == sfEvtClosed) {
            sfRenderWindow_close(my_w->window);
            return (1);
        }
        if (my_w->event.type == sfEvtMouseButtonPressed)
            return (params_check(my_w, my_s));
    }
    return (0);
}

void button_quit(my_struct_sprite *my_s, my_s_w *my_w)
{
    sfIntRect rect_quit = {400, 580, 800, 120};
    sfVector2f pos_quit = {790, 680};

    sfSprite_setPosition(my_s->sprite[1], pos_quit);
    sfSprite_setTextureRect(my_s->sprite[1], rect_quit);
    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[1], NULL);
}

void buttom_params(my_struct_sprite *my_s, my_s_w *my_w)
{
    sfVector2f pos_sound = {400, 450};
    sfVector2f pos_img_sound = {575, 415};
    sfIntRect rect_sound = {0, 495, 400, 150};
    sfIntRect rect_img_sound = {0, 0, 100, 200};
    sfIntRect rect_img_nosound = {110, 0, 100, 200};

    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[0], NULL);
    sfSprite_setPosition(my_s->sprite[1], pos_sound);
    sfSprite_setTextureRect(my_s->sprite[1], rect_sound);
    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[1], NULL);
    sfSprite_setPosition(my_s->sprite[2], pos_img_sound);
    if (my_w->sound_game == 1)
        sfSprite_setTextureRect(my_s->sprite[2], rect_img_sound);
    else {
        pos_img_sound.x += 20;
        sfSprite_setPosition(my_s->sprite[2], pos_img_sound);
        sfSprite_setTextureRect(my_s->sprite[2], rect_img_nosound);
    }
    sfRenderWindow_drawSprite(my_w->window, my_s->sprite[2], NULL);
    button_quit(my_s, my_w);
}

void params(my_struct_sprite *my_s, my_s_w *my_w, sfColor color)
{
    int check = 0;

    while (check != 1) {
        check = close_params(my_w, my_s);
        sfRenderWindow_drawSprite(my_w->window, my_s->sprite[0], NULL);
        buttom_params(my_s, my_w);
        sfRenderWindow_display(my_w->window);
        sfRenderWindow_clear(my_w->window, color);
    }
}
