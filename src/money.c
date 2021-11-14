/*
** EPITECH PROJECT, 2020
** money
** File description:
** money
*/

#include "my.h"

int price_up_2(my_s_t *my_t)
{
    if (my_t->ame_tower == 4)
        if (my_t->money >= 20) {
            my_t->money -= 20;
            return (0);
        }
    if (my_t->ame_tower == 5)
        if (my_t->money >= 30) {
            my_t->money -= 30;
            return (0);
        }
    if (my_t->ame_tower == 6)
        if (my_t->money >= 45) {
            my_t->money -= 45;
            return (0);
        }
    return (1);
}

int price_up(my_s_t *my_t)
{
    if (my_t->ame_tower == 1)
        if (my_t->money >= 10) {
            my_t->money -= 10;
            return (0);
        }
    if (my_t->ame_tower == 2)
        if (my_t->money >= 20) {
            my_t->money -= 20;
            return (0);
        }
    if (my_t->ame_tower == 3)
        if (my_t->money >= 35) {
            my_t->money -= 35;
            return (0);
        }
    return (price_up_2(my_t));
}

void print_money(my_s_t *my_t, my_s_w *my_w)
{
    sfVector2f pos_money = {1725, 80};
    char *str;

    sfSprite_setPosition(my_t->sprite_money, pos_money);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_money, NULL);
    str = int_str(my_t->money);
    if (my_t->money > 99)
        pos_money.x -= 25;
    if (my_t->money > 999)
        pos_money.x -= 25;
    if (my_t->money > 9999)
        pos_money.x -= 25;
    if (my_t->money > 9999)
        pos_money.x -= 25;
    pos_money.x -= 40;
    pos_money.y += 18;
    sfText_setPosition(my_t->texte, pos_money);
    sfText_setString(my_t->texte, str);
    sfRenderWindow_drawText(my_w->window, my_t->texte, NULL);
    up_money(my_t);
}

void money_print(my_s_t *my_t, my_s_w *my_w, str_t *str, my_struct_up *up)
{
    sfVector2f pos_money = {1750, 160};

    sfSprite_setPosition(my_t->sprite_money, pos_money);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_money, NULL);
    pos_money.y += 70;
    sfSprite_setPosition(my_t->sprite_money, pos_money);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_money, NULL);
    pos_money.y += 70;
    sfSprite_setPosition(my_t->sprite_money, pos_money);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_money, NULL);
    pos_money.y += 90;
    sfSprite_setPosition(my_t->sprite_money, pos_money);
    sfRenderWindow_drawSprite(my_w->window, my_t->sprite_money, NULL);
    if (my_t->time42 < 60) {
        pos_money.y -= 25;
        pos_money.x -= 65;
        sfSprite_setPosition(my_t->sprite_cadena, pos_money);
        sfRenderWindow_drawSprite(my_w->window, my_t->sprite_cadena, NULL);
    }
    print_up(my_w, my_t, str, up);
    print_money(my_t, my_w);
}
