/*
** EPITECH PROJECT, 2020
** draw
** File description:
** all
*/

#include "my.h"

void dp6(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t)
{
    sfIntRect rect_tower3_3 = {140, 200, 70, 140};

    if (nb > 900 && nb < 1000) {
        str->position_ground.x += 20;
        str->position_ground.y -= 15;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower3_3);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (nb > 1000 && nb < 1100)
        tower_42_pr(my_w, my_t, str);
}

void dp5(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t)
{
    sfIntRect rect_tower1_3 = {130, 0, 60, 90};
    sfIntRect rect_tower2_3 = {140, 85, 70, 100};

    if (nb > 700 && nb < 800) {
        str->position_ground.x += 15;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower1_3);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (nb > 800 && nb < 900) {
        str->position_ground.x += 20;
        str->position_ground.y -= 15;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower2_3);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    dp6(nb, str, my_w, my_t);
}

void dp4(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t)
{
    sfIntRect rect_tower2_2 = {70, 85, 70, 100};
    sfIntRect rect_tower3_2 = {70, 200, 70, 140};

    if (nb > 500 && nb < 600) {
        str->position_ground.x += 20;
        str->position_ground.y -= 8;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower2_2);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (nb > 600 && nb < 700) {
        str->position_ground.x += 20;
        str->position_ground.y -= 15;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower3_2);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    dp5(nb, str, my_w, my_t);
}

void dp3(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t)
{
    sfIntRect rect_tower3 = {0, 200, 70, 140};
    sfIntRect rect_tower1_2 = {70, 0, 60, 90};

    if (nb > 300 && nb < 400) {
        str->position_ground.x += 20;
        str->position_ground.y -= 25;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower3);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (nb > 400 && nb < 500) {
        str->position_ground.x += 20;
        str->position_ground.y -= 10;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower1_2);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    dp4(nb, str, my_w, my_t);
}

void dp2(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t)
{
    sfIntRect rect_tower1 = {0, 0, 70, 100};
    sfIntRect rect_tower2 = {0, 100, 70, 100};
    sfIntRect rect_tower3 = {0, 200, 70, 140};

    if (nb > 100 && nb < 200) {
        str->position_ground.x += 10;
        str->position_ground.y -= 10;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower1);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    if (nb > 200 && nb < 300) {
        str->position_ground.x += 10;
        sfSprite_setPosition(my_t->sprite, str->position_ground);
        sfSprite_setTextureRect(my_t->sprite, rect_tower2);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    }
    dp3(nb, str, my_w, my_t);
}
