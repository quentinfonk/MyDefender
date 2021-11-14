/*
** EPITECH PROJECT, 2020
** create
** File description:
** create
*/

#include "my.h"

void set_background(str_t *str)
{
    str->tex_g_start = sfTexture_createFromFile("Load/g_0_start.png", NULL);
    str->tex_g_road = sfTexture_createFromFile("Load/g_1_road.png", NULL);
    str->tex_g_end = sfTexture_createFromFile("Load/farm.png", NULL);
    str->tex_g_tower = sfTexture_createFromFile("Load/g_3_.png", NULL);
    str->tex_g_grass = sfTexture_createFromFile("Load/g_4_grass.png", NULL);
    str->tex_g_up = sfTexture_createFromFile("Load/ground_5_up.png", NULL);
    str->tex_g_an_ri_do = sfTexture_createFromFile("Load/g_4_ri_do.png", NULL);
    str->tex_g_an_ri_up = sfTexture_createFromFile("Load/g_6_riup.jpg", NULL);
    str->tex_g_an_le_do = sfTexture_createFromFile("Load/g_7_le_do.jpg", NULL);
    str->tex_g_an_le_up = sfTexture_createFromFile("Load/g_8_le_up.jpg", NULL);
    str->tex_win = sfTexture_createFromFile("Load/win.png", NULL);
    str->tex_loose = sfTexture_createFromFile("Load/lose.jpg", NULL);
}

void set_sprite(str_t *str)
{
    str->mode = (sfVideoMode){1920, 1080, 128};
    str->sprite_g_start = sfSprite_create();
    str->sprite_g_road = sfSprite_create();
    str->sprite_g_end = sfSprite_create();
    str->sprite_g_tower = sfSprite_create();
    str->sprite_g_grass = sfSprite_create();
    str->sprite_g_up = sfSprite_create();
    str->sprite_g_an_ri_do = sfSprite_create();
    str->sprite_g_an_ri_up = sfSprite_create();
    str->sprite_g_an_le_do = sfSprite_create();
    str->sprite_g_an_le_up = sfSprite_create();
    str->sprite_win = sfSprite_create();
    str->sprite_loose = sfSprite_create();
}

void set_texture(str_t *str)
{
    sfSprite_setTexture(str->sprite_g_start, str->tex_g_start, sfFalse);
    sfSprite_setTexture(str->sprite_g_road, str->tex_g_road, sfFalse);
    sfSprite_setTexture(str->sprite_g_end, str->tex_g_end, sfFalse);
    sfSprite_setTexture(str->sprite_g_tower, str->tex_g_tower, sfFalse);
    sfSprite_setTexture(str->sprite_g_grass, str->tex_g_grass, sfFalse);
    sfSprite_setTexture(str->sprite_g_up, str->tex_g_up, sfFalse);
    sfSprite_setTexture(str->sprite_g_an_ri_do, str->tex_g_an_ri_do, sfFalse);
    sfSprite_setTexture(str->sprite_g_an_ri_up, str->tex_g_an_ri_up, sfFalse);
    sfSprite_setTexture(str->sprite_g_an_le_do, str->tex_g_an_le_do, sfFalse);
    sfSprite_setTexture(str->sprite_g_an_le_up, str->tex_g_an_le_up, sfFalse);
    sfSprite_setTexture(str->sprite_win, str->tex_win, sfFalse);
    sfSprite_setTexture(str->sprite_loose, str->tex_loose, sfFalse);
    str->end = -1;
}

void create2(my_struct_sprite *my_s, my_s_w *my_w, str_t *str)
{
    my_s->sprite[0] = sfSprite_create();
    sfSprite_setTexture(my_s->sprite[0], my_s->text[0], sfTrue);
    my_s->text[1] = sfTexture_createFromFile("Load/Butom.png", NULL);
    my_s->sprite[1] = sfSprite_create();
    sfSprite_setTexture(my_s->sprite[1], my_s->text[1], sfTrue);
    my_s->text[2] = sfTexture_createFromFile("Load/Sound.png", NULL);
    my_s->sprite[2] = sfSprite_create();
    sfSprite_setTexture(my_s->sprite[2], my_s->text[2], sfTrue);
    my_s->text[3] = sfTexture_createFromFile("Load/Butom.png", NULL);
    my_s->sprite[3] = sfSprite_create();
    sfSprite_setTexture(my_s->sprite[3], my_s->text[3], sfTrue);
    my_s->text[4] = sfTexture_createFromFile("Load/return.png", NULL);
    my_s->sprite[4] = sfSprite_create();
    sfSprite_setTexture(my_s->sprite[4], my_s->text[4], sfTrue);
    my_w->sound_game = 1;
    my_w->menu = 0;
    set_background(str);
    set_sprite(str);
    set_texture(str);
    str->game = 0;
    create3(my_s, my_w, str);
}

void create(my_struct_sprite *my_s, my_s_w *my_w, str_t *str, str_t_mob *str_m)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sfVector2f pos_texte = {300, 100};

    my_w->window = sfRenderWindow_create(video_mode, "my_defender", sfResize |
                                        sfClose, NULL);
    if (!my_w->window)
        return;
    my_s->texte = sfText_create();
    my_s->font = sfFont_createFromFile("Load/police_def.ttf");
    sfText_setFont(my_s->texte, my_s->font);
    sfText_setCharacterSize(my_s->texte, 100);
    sfText_setPosition(my_s->texte, pos_texte);
    my_s->text = malloc(sizeof(sfTexture*) * 6);
    my_s->sprite = malloc(sizeof(sfTexture*) * 6);
    my_s->sprite[5] = NULL;
    my_s->text[5] = NULL;
    my_s->text[0] = sfTexture_createFromFile("Load/menu.jpg", NULL);
    my_s->move = 0;
    str->clock_end = sfClock_create();
    str_m->life_casle =	100;
    create2(my_s, my_w, str);
}
