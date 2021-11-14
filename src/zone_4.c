/*
** EPITECH PROJECT, 2020
** zone
** File description:
** 4
*/

#include "my.h"

void zone_4(my_s_w *my_w, my_s_t *my_t, sfVector2f position)
{
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x += 100;
    position.y += 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x -= 100;
    position.y += 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
    position.x -= 100;
    position.y -= 100;
    sfSprite_setPosition(my_t->sprite_zone, position);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_zone, NULL);
}
