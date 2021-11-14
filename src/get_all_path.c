/*
** EPITECH PROJECT, 2020
** get_all_path
** File description:
** gat_path
*/

#include "my.h"

void path_1(int line, int coll, str_t *str, int i)
{
    if (str->map_tab[line][coll + 1] == 1 ||
            str->map_tab[line][coll + 1] == 5 ||
            str->map_tab[line][coll + 1] == 6 ||
            str->map_tab[line][coll + 1] == 7 ||
            str->map_tab[line][coll + 1] == 8 ||
            str->map_tab[line][coll + 1] == 9) {
        str->map_tab[line][coll] = -2;
        str->path_tab[i] = 1;
    }
}

void path_2(int line, int coll,  str_t *str, int i)
{
    if (str->map_tab[line + 1][coll] == 1 ||
            str->map_tab[line + 1][coll] == 5 ||
            str->map_tab[line + 1][coll] == 6 ||
            str->map_tab[line + 1][coll] == 7 ||
            str->map_tab[line + 1][coll] == 8 ||
            str->map_tab[line + 1][coll] == 9) {
        str->map_tab[line][coll] = -3;
        str->path_tab[i] = 2;
    }
}

void path_3(int line, int coll, str_t *str, int i)
{
    if (str->map_tab[line - 1][coll] == 1 ||
            str->map_tab[line - 1][coll] == 5 ||
            str->map_tab[line - 1][coll] == 6 ||
            str->map_tab[line - 1][coll] == 7 ||
            str->map_tab[line - 1][coll] == 8 ||
            str->map_tab[line - 1][coll] == 9) {
        str->map_tab[line][coll] = -3;
        str->path_tab[i] = 4;
    }
}

void path_4(int line, int coll, str_t *str, int i)
{
    if (str->map_tab[line][coll - 1] == 1 ||
            str->map_tab[line][coll - 1] == 5 ||
            str->map_tab[line][coll - 1] == 6 ||
            str->map_tab[line][coll - 1] == 7 ||
            str->map_tab[line][coll - 1] == 8 ||
            str->map_tab[line][coll - 1] == 9) {
            str->map_tab[line][coll] = -2;
            str->path_tab[i] = 3;
    }
}

void get_all_path(int line, int coll, str_t *str, int i)
{
    path_1(line, coll, str, i);
    path_2(line, coll, str, i);
    path_3(line, coll, str, i);
    path_4(line, coll, str, i);
}
