/*
** EPITECH PROJECT, 2020
** set_good_map
** File description:
** set_good_map
*/

#include "my.h"

void set_good_map_2(my_s_w *my_w, my_struct_mm *my_mm, str_t *str)
{
    if (my_mm->close_menu == 5) {
        str->map_tab = set_map_to_int("map/map_5.txt");
        str->map_save = set_map_to_int("map/map_5.txt");
    }
    if (my_mm->close_menu == 6) {
        str->map_tab = set_map_to_int("map/map_6.txt");
        str->map_save = set_map_to_int("map/map_6.txt");
    }
    if (my_mm->close_menu == 7) {
        str->map_tab = set_map_to_int("map/map_7.txt");
        str->map_save = set_map_to_int("map/map_7.txt");
    }
}

void set_good_map(my_s_w *my_w, my_struct_mm *my_mm, str_t *str)
{
    if (my_mm->close_menu == 1) {
        str->map_tab = set_map_to_int("map/map.txt");
        str->map_save = set_map_to_int("map/map.txt");
    }
    if (my_mm->close_menu == 2) {
        str->map_tab = set_map_to_int("map/map_2.txt");
        str->map_save = set_map_to_int("map/map_2.txt");
    }
    if (my_mm->close_menu == 3) {
        str->map_tab = set_map_to_int("map/map_3.txt");
        str->map_save = set_map_to_int("map/map_3.txt");
    }
    if (my_mm->close_menu == 4) {
        str->map_tab = set_map_to_int("map/map_4.txt");
        str->map_save = set_map_to_int("map/map_4.txt");
    }
    set_good_map_2(my_w, my_mm, str);
}
