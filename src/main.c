/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"

int check_waves(int ac, str_t *str, char *string)
{
    int temp;

    if (ac == 1)
        return (1);
    if (string[0] == '-')
        return (0);
    temp = my_getnbr(string);
    if (temp > 0)
        str->max_wave = temp;
    else {
        write(1, "put more than 0 wave\n", 20);
        return (0);
    }
    return (1);
}

int main(int ac, char **av, char **env)
{
    my_struct_sprite my_s;
    my_s_w my_w;
    my_struct_clock my_c;
    str_t_mob str_m;
    sfColor color = {0, 0, 0, 0};
    str_t str;

    if (check_all(ac, av, env) == 84)
        return (84);
    if (check_waves(ac, &str, av[1]) == 0)
        return (0);
    create(&my_s, &my_w, &str, &str_m);
    while (sfRenderWindow_isOpen(my_w.window))
        if (menu(&my_s, &my_w) != 0 || map(&my_w, &str) == 84
            || game(&str, &my_w, &str_m) == (84 || 0)) {
            return (0);
        }
    if (my_w.sound_game == 1)
        sfMusic_destroy(my_w.music);
    return (0);
}
