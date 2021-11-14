/*
** EPITECH PROJECT, 2020
** map
** File description:
** create
*/

#include "my.h"

void create4(my_s_w *my_w, my_struct_mm *my_mm)
{
    my_mm->text_map2 = sfTexture_createFromFile("Load/menu_map.jpg", NULL);
    my_mm->sprite_map2 = sfSprite_create();
    sfSprite_setTexture(my_mm->sprite_map2, my_mm->text_map2, sfFalse);
}

void create_map(my_s_w *my_w, my_struct_mm *my_mm)
{
    my_mm->text_map = sfTexture_createFromFile("Load/Map_choose.png", NULL);
    my_mm->sprite_map = sfSprite_create();
    sfSprite_setTexture(my_mm->sprite_map, my_mm->text_map, sfFalse);
    my_mm->close_menu = 0;
    create4(my_w, my_mm);
}
