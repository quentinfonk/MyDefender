/*
** EPITECH PROJECT, 2020
** map
** File description:
** map
*/

#include "my.h"

int close_map(my_s_w *my_w, my_struct_mm *my_mm)
{
    if (sfRenderWindow_pollEvent(my_w->window, &my_mm->event)) {
        if (my_mm->event.type == sfEvtClosed) {
            sfRenderWindow_close(my_w->window);
            return (1);
        }
        if (my_mm->event.type == sfEvtMouseButtonPressed)
            check_po(my_w, my_mm);
    }
}

void draw_map(my_s_w *my_w, my_struct_mm *my_mm)
{
    sfRenderWindow_drawSprite(my_w->window, my_mm->sprite_map2, NULL);
    sfRenderWindow_drawSprite(my_w->window, my_mm->sprite_map, NULL);
}

int map(my_s_w *my_w, str_t *str)
{
    my_struct_mm my_mm;

    create_map(my_w, &my_mm);
    while (my_mm.close_menu == 0) {
        if (close_map(my_w, &my_mm) == 1)
            return (84);
        draw_map(my_w, &my_mm);
        sfRenderWindow_display(my_w->window);
        sfRenderWindow_clear(my_w->window, sfBlack);
    }
    set_good_map(my_w, &my_mm, str);
}
