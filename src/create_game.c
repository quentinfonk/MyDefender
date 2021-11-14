/*
** EPITECH PROJECT, 2020
** create
** File description:
** game
*/

#include "my.h"

void create_game2(my_s_t *my_t, my_s_s *my_st)
{
    sfText_setFont(my_t->texte, my_t->font);
    sfText_setCharacterSize(my_t->texte, 50);
    my_t->text_money = sfTexture_createFromFile("Load/money.png", NULL);
    my_t->sprite_money = sfSprite_create();
    sfSprite_setTexture(my_t->sprite_money, my_t->text_money, sfTrue);
    my_t->text_zone = sfTexture_createFromFile("Load/Zone.png", NULL);
    my_t->sprite_zone = sfSprite_create();
    sfSprite_setTexture(my_t->sprite_zone, my_t->text_zone, sfTrue);
    my_t->text_up = sfTexture_createFromFile("Load/ButtonUpgrade.png", NULL);
    my_t->sprite_up = sfSprite_create();
    sfSprite_setTexture(my_t->sprite_up, my_t->text_up, sfTrue);
    my_t->ame_tower = 0;
    my_t->pos_click.x = 0;
    my_t->pos_click.y = 0;
    my_t->money = 20;
    my_t->time42 = 0;
    my_t->text_cadena = sfTexture_createFromFile("Load/cadena.png", NULL);
    my_t->sprite_cadena = sfSprite_create();
    sfSprite_setTexture(my_t->sprite_cadena, my_t->text_cadena, sfTrue);
}

void create_game3(my_struct_up *my_up, my_s_t *my_t)
{
    my_up->text_up = sfTexture_createFromFile("Load/card_ame_tower.png", NULL);
    my_up->sprite_up = sfSprite_create();
    sfSprite_setTexture(my_up->sprite_up, my_up->text_up, sfTrue);
    my_t->text_z_c = sfTexture_createFromFile("Load/green.png", NULL);
    my_t->sprite_z_c = sfSprite_create();
    sfSprite_setTexture(my_t->sprite_z_c, my_t->text_z_c, sfTrue);
    my_t->clock_fire = malloc(sizeof(sfClock *) * 3);
    for (int i = 0; i != 3; i++)
        my_t->clock_fire[i] = sfClock_create();
}

void create_game(my_s_t *my_t, my_s_s *my_st, my_struct_up *my_up)
{
    sfVector2f pos_texte = {0, -10};

    my_st->texte = sfText_create();
    my_st->font = sfFont_createFromFile("Load/arial.ttf");
    sfText_setFont(my_st->texte, my_st->font);
    sfText_setCharacterSize(my_st->texte, 100);
    sfText_setPosition(my_st->texte, pos_texte);
    my_st->clock_t = sfClock_create();
    my_t->text = sfTexture_createFromFile("Load/Tower_evol.png", NULL);
    my_t->sprite = sfSprite_create();
    sfSprite_setTexture(my_t->sprite, my_t->text, sfTrue);
    my_t->text1 = sfTexture_createFromFile("Load/pannel.png", NULL);
    my_t->sprite1 = sfSprite_create();
    sfSprite_setTexture(my_t->sprite1, my_t->text1, sfTrue);
    my_t->texte = sfText_create();
    my_t->font = sfFont_createFromFile("Load/arial.ttf");
    my_t->clock = sfClock_create();
    my_t->money_time = sfClock_create();
    my_t->yn = 0;
    create_game2(my_t, my_st);
    create_game3(my_up, my_t);
}
