/*
** EPITECH PROJECT, 2020
** check
** File description:
** all
*/

#include "my.h"

void print_h(void)
{
    my_putstr("./my_defender [number_of_vague]\n");
    my_putstr("No number = unlimited\n");
    my_putstr("Buy tower to defend your castle\n");
    my_putstr("Try to save your castle\n");
    my_putstr("Good luck and be carefull\n");
}

int check_env(char **env)
{
    char *str = "DISPLAY=:0.0";

    for (int i = 0; env[i] != NULL; i++)
        for (int o = 0; str[o] == env[i][o]; o++)
            if (o == 12)
                return (0);
    return (84);
}

int check_av(int ac, char **av, char **env)
{
    if (ac > 2)
        return (84);
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
            print_h();
            return (1);
         }
        if (av[1][0] > 47 && av[1][0] < 58 && av[1][1] == '\0') {
            return 2;
        }
        else
            return (84);
    }
    return (check_env(env));
}

int check_all(int ac, char **av, char **env)
{
    int a = 0;

    a = check_av(ac, av, env);
    if (a == 84)
        return (84);
    if (a == 1)
        return (1);
}
