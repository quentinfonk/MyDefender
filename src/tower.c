/*
** EPITECH PROJECT, 2020
** tower
** File description:
** tower
*/

#include "my.h"

void t2(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w)
{
    sfVector2f pos_tower42 = {1600, 380};
    sfIntRect rect_tower42 = {0, 310, 50, 150};

    sfSprite_setPosition(my_t->sprite, pos_tower42);
    sfSprite_setTextureRect(my_t->sprite, rect_tower42);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
}

void tp(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w)
{
    sfIntRect rect_tower1 = {0, 0, 70, 100};
    sfVector2f pos_tower1 = {1600, 160};
    sfIntRect rect_tower2 = {0, 100, 70, 100};
    sfVector2f pos_tower2 = {1600, 235};
    sfIntRect rect_tower3 = {0, 200, 70, 110};
    sfVector2f pos_tower3 = {1600, 290};
    sfVector2f pos_parch = {1500, -100};

    sfSprite_setPosition(my_t->sprite1, pos_parch);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite1, NULL);
    sfSprite_setPosition(my_t->sprite, pos_tower1);
    sfSprite_setTextureRect(my_t->sprite, rect_tower1);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    sfSprite_setPosition(my_t->sprite, pos_tower2);
    sfSprite_setTextureRect(my_t->sprite, rect_tower2);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    sfSprite_setPosition(my_t->sprite, pos_tower3);
    sfSprite_setTextureRect(my_t->sprite, rect_tower3);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite, NULL);
    t2(my_t, my_st, my_w);
}

void tpr(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w)
{
    char *t1 = "5";
    char *t2 = "15";
    char *t3 = "30";
    char *t4 = "42";
    sfVector2f pos_price = {1700, 180};

    sfText_setString(my_t->texte, t1);
    sfText_setPosition(my_t->texte, pos_price);
    sfRenderWindow_drawText(my_w->window, my_t->texte, NULL);
    pos_price.y += 70;
    sfText_setString(my_t->texte, t2);
    sfText_setPosition(my_t->texte, pos_price);
    sfRenderWindow_drawText(my_w->window, my_t->texte, NULL);
    pos_price.y += 70;
    sfText_setString(my_t->texte, t3);
    sfText_setPosition(my_t->texte, pos_price);
    sfRenderWindow_drawText(my_w->window, my_t->texte, NULL);
    pos_price.y += 90;
    sfText_setString(my_t->texte, t4);
    sfText_setPosition(my_t->texte, pos_price);
    sfRenderWindow_drawText(my_w->window, my_t->texte, NULL);
}

void print_up(my_s_w *my_w, my_s_t *my_t, str_t *str, my_struct_up *up)
{
    sfVector2f position = {1400, 600};
    sfIntRect rect_ame = {0, 0, 298, 700};

    sfSprite_setPosition(my_t->sprite_up, position);
    position.y -= 150;
    position.x += 150;
    sfSprite_setPosition(up->sprite_up, position);
    sfSprite_setTextureRect(up->sprite_up, rect_ame);
    if (my_t->ame_tower == 1)
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    if (my_t->ame_tower == 2) {
        rect_ame.left = 300;
        sfSprite_setTextureRect(up->sprite_up, rect_ame);
        sfRenderWindow_drawSprite(my_w->window, up->sprite_up, NULL);
    }
    print_up2(my_w, my_t, up);
}
