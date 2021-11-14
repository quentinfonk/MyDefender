/*
** EPITECH PROJECT, 2020
** get_map
** File description:
** get_map
*/

#include "my.h"

int **set_map_to_int(char const *filepath)
{
    char *buff = get_map(filepath);
    int **map_tab = malloc(sizeof(int*) * (11 + 1));
    int i = 0;
    int j = 0;
    int count = 0;

    for (i = 0; i < 11; i++) {
        map_tab[i] = malloc(sizeof(int) * (20 + 1));
        for (j = 0; buff[count] != '\n' &&  buff[count] != '\0'; count++, j++) {
            map_tab[i][j] = NBR(buff[count]);
        }
        map_tab[i][j] = -1;
        count++;
    }
    free(buff);
    return map_tab;
}

void game_2(my_s_s *my_st, my_s_t *my_t, my_s_w *my_w)
{
    style_print(my_t, my_st, my_w);
    tp(my_t, my_st, my_w);
    tpr(my_t, my_st, my_w);
}

int posee(my_s_t *my_t, m_p *my_p, my_s_w *my_w, str_t *str)
{
    if (str->game == 2) {
        if (paus(my_t, my_p, my_w, str) == 1)
            return (84);
        else
            str->game = 0;
    }
    return (0);
}

int disp(my_s_w *my_w)
{
    sfRenderWindow_display(my_w->window);
    sfRenderWindow_clear(my_w->window, sfBlack);
    return (0);
}

int game(str_t *str, my_s_w *my_w, str_t_mob *str_m)
{
    my_s_t my_t;
    m_p my_p;
    my_struct_up my_up;
    my_s_s my_st;

    create_game(&my_t, &my_st, &my_up);
    create_mob(my_w, str, str_m);
    my_t.tab_zo = str->map_save;
    while (str->game != 1) {
        draw(str, my_w, str_m, &my_t);
        game_2(&my_st, &my_t, my_w);
        money_print(&my_t, my_w, str, &my_up);
        close_tower(my_w, &my_t, str);
        if (str->game == 1)
            return (0);
        if (str->game == -1 || disp(my_w) == 84)
            return (0);
        if (posee(&my_t, &my_p, my_w, str) == 84)
            return (84);
    }
    return (0);
}
