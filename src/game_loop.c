/*
** EPITECH PROJECT, 2020
** game
** File description:
** loop
*/

#include "my.h"

void draw(str_t *str, my_s_w *my_w, str_t_mob *str_m, my_s_t *my_t)
{
    int x = 0;
    int y = 0;
    int j = 0;
    int i = 0;

    for (i = 0; i < 11; i++, y+=100)
        for (j = 0, x = 0; str->map_save[i][j] != -1; j++, x+=100) {
            str->position_ground.x = x;
            str->position_ground.y = y;
            draw_pos(str->map_save[i][j], str, my_w);
            draw_pos_biss(str->map_save[i][j], str, my_w);
            dp(str->map_tab[i][j], str, my_w, my_t);
        }
    if (str_m->wave_save == 1) {
        get_all_wave(str_m);
    }
    draw_mob(str, my_w, str_m, my_t);
}

char *get_map(char const *filepath)
{
    char *buff = malloc(sizeof(char) * (230 + 1));
    int opn = open(filepath, O_RDONLY);
    int rd = read(opn, buff, 231);

    return buff;
}
