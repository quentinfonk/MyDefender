/*
** EPITECH PROJECT, 2020
** check_pos_map
** File description:
** check_pos_map
*/

#include "my.h"

void check_po_2(my_s_w *my_w, my_struct_mm *my_mm, sfVector2f position)
{
    if (position.x > 153 && position.x < 371 && position.y > 440
        && position.y < 540)
        my_mm->close_menu = 5;
    if (position.x > 649 && position.x < 870 && position.y > 440
        && position.y < 540)
        my_mm->close_menu = 6;
    if (position.x > 1134 && position.x < 1355 && position.y > 440
        && position.y < 540)
        my_mm->close_menu = 7;
}

void check_po(my_s_w *my_w, my_struct_mm *my_mm)
{
    sfVector2f position;

    position.x = sfMouse_getPositionRenderWindow(my_w->window).x;
    position.y = sfMouse_getPositionRenderWindow(my_w->window).y;
    if (position.x > 153 && position.x < 371 && position.y > 211
        && position.y < 292)
        my_mm->close_menu = 1;
    if (position.x > 649 && position.x < 870 && position.y > 211
        && position.y < 292)
        my_mm->close_menu = 2;
    if (position.x > 1134 && position.x < 1355 && position.y > 211
        && position.y < 292)
        my_mm->close_menu = 3;
    if (position.x > 1600 && position.x < 1820 && position.y > 211
        && position.y < 292)
        my_mm->close_menu = 4;
    check_po_2(my_w, my_mm, position);
}
