/*
** EPITECH PROJECT, 2020
** zone
** File description:
** zone
*/

#include "my.h"

void zone_1(my_s_w *my_w, my_s_t *my_t, sfVector2f position)
{
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x += 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    for (int i = 2; i != 0; i--) {
        position.y += 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 2; i != 0; i--) {
        position.x -= 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 2; i != 0; i--) {
        position.y -= 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
}

void z22(my_s_w *my_w, my_s_t *my_t, sfVector2f position)
{
    position.y -= 100;
    position.x -= 100;
    for (int i = 4; i != 0; i--, position.y += 100) {
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 4; i != 0; i--, position.x += 100) {
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 4; i != 0; i--, position.y -= 100) {
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 4; i != 0; i--, position.x -= 100) {
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
}

void zone_2(my_s_w *my_w, my_s_t *my_t, sfVector2f position)
{
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x += 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    for (int i = 2; i != 0; i--) {
        position.y += 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 2; i != 0; i--) {
        position.x -= 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 2; i != 0; i--) {
        position.y -= 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    z22(my_w, my_t, position);
}

void z31(my_s_w *my_w, my_s_t *my_t, sfVector2f position)
{
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x += 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    for (int i = 2; i != 0; i--) {
        position.y += 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 2; i != 0; i--) {
        position.x -= 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
    for (int i = 2; i != 0; i--) {
        position.y -= 100;
        sfSprite_setPosition(my_t->sprite_zone, position);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    }
}

void zone_3(my_s_w *my_w, my_s_t *my_t, sfVector2f position)
{
    z31(my_w, my_t, position);
    position.y -= 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x += 200;
    position.y += 200;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x -= 200;
    position.y += 200;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x -= 200;
    position.y -= 200;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
}
