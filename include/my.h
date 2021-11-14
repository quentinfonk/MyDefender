/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Config.h>
#include <SFML/Window/Export.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef MY_H_
#define MY_H
#define NBR(a) (a - '0')

typedef struct my_struct_clock
{
    sfClock *clock;
}my_struct_clock;

typedef struct my_s_w
{
    sfRenderWindow *window;
    sfEvent event;
    int sound_game;
    int menu;
    sfMusic *music;
}my_s_w;

typedef struct my_struct_sprite
{
    sfTexture **text;
    sfSprite **sprite;
    sfFont *font;
    sfText *texte;
    int move;
}my_struct_sprite;

typedef struct my_struct_up
{
    sfTexture *text_up;
    sfSprite *sprite_up;
}my_struct_up;


typedef struct str_t_mob
{
    sfRectangleShape **rect_life;
    sfRectangleShape **rect_w;
    sfVector2f *rect_pos;
    sfVector2f rect_size;
    int nb_mob;
    int life_casle;
    int *type_all_mob;
    int *life_all_mob;
    int *state_all_mob;
    sfSprite **sprite_all_mob;
    sfClock *clock_all_wave;
    sfIntRect *rect_all_mob;
    int secure_wave;
    int num_mob;
    sfVector2f *info_mob;
    sfClock *clock_test;
    sfTexture **text_mob;
    sfSprite **sprite_mob;
    sfClock *clock_mob;
    sfClock *clock_wave;
    sfIntRect *rect_mob;
    sfVector2f *position_mob;
    int *block_size;
    int *block_nb;
    int *block_tab;
    int spawn_x;
    int spawn_y;
    int save_sp_x;
    int	save_sp_y;
    int end_x;
    int end_y;
    int pos_x;
    int pos_y;
    int temp;
    int size_map;
    int wave_total;
    int wave_save;
}str_t_mob;

typedef struct my_s_s
{
    sfFont *font;
    sfText *texte;
    sfClock *clock_t;
}my_s_s;

typedef struct my_s_t
{
    sfTexture *text;
    sfSprite *sprite;
    sfTexture *text1;
    sfSprite *sprite1;
    sfTexture *text_money;
    sfSprite *sprite_money;
    sfTexture *text_zone;
    sfSprite *sprite_zone;
    sfTexture *text_up;
    sfSprite *sprite_up;
    sfFont *font;
    sfText *texte;
    int ame_tower;
    sfVector2f pos_click;
    sfClock *money_time;
    int money;
    int time42;
    sfClock *clock;
    sfTexture *text_cadena;
    sfSprite *sprite_cadena;
    int yn;
    int **tab_zo;
    sfTexture *text_z_c;
    sfSprite *sprite_z_c;
    sfClock **clock_fire;
    sfVector2f start;
    sfVector2f dest;
    int mob_choice;
}my_s_t;

typedef struct my_struct_mm
{
    sfEvent event;
    int close_menu;
    sfTexture *text_map;
    sfSprite *sprite_map;
    sfTexture *text_map2;
    sfSprite *sprite_map2;
}my_struct_mm;

typedef struct {
    sfEvent event;
    sfVideoMode mode;
    sfRenderWindow* window;
    int *path_tab;
    sfTexture* tex_g_start;
    sfTexture* tex_g_up;
    sfTexture* tex_g_road;
    sfTexture* tex_g_end;
    sfTexture* tex_g_tower;
    sfTexture* tex_g_grass;
    sfTexture* tex_g_an_ri_do;
    sfTexture* tex_g_an_ri_up;
    sfTexture* tex_g_an_le_do;
    sfTexture* tex_g_an_le_up;
    sfTexture* tex_win;
    sfTexture* tex_loose;
    sfSprite* sprite_g_start;
    sfSprite* sprite_g_up;
    sfSprite* sprite_g_road;
    sfSprite* sprite_g_end;
    sfSprite* sprite_g_tower;
    sfSprite* sprite_g_grass;
    sfSprite* sprite_g_an_ri_up;
    sfSprite* sprite_g_an_ri_do;
    sfSprite* sprite_g_an_le_up;
    sfSprite* sprite_g_an_le_do;
    sfSprite* sprite_win;
    sfSprite* sprite_loose;
    int max_wave;
    sfVector2f position_ground;
    int **map_save;
    int **map_tab;
    int game;
    int end;
    sfClock *clock_end;
}str_t;

typedef struct m_p
{
    sfEvent event_pause;
}m_p;

void create(my_struct_sprite *my_s, my_s_w *my_w, str_t *str, str_t_mob *str_m);
void destroy(my_struct_sprite *my_s, my_s_w *my_w, int q_p);
int game(str_t *str, my_s_w *my_w, str_t_mob *str_m);
int menu(my_struct_sprite *my_s, my_s_w *my_w);
void destroy(my_struct_sprite *my_s, my_s_w *my_w, int q_p);
int close_wx(my_s_w *my_w, my_struct_sprite *my_s);
void params(my_struct_sprite *my_s, my_s_w *my_w, sfColor color);
void create_mob(my_s_w *my_w, str_t *str, str_t_mob *str_m);
char *get_map(char const *filepath);
int **set_map_to_int(char const *filepath);
void draw_mob(str_t *str, my_s_w *my_w, str_t_mob *str_m, my_s_t *my_t);
void create_game(my_s_t *my_t, my_s_s *my_st, my_struct_up *my_up);
void dp2(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t);
void zone_1(my_s_w *my_w, my_s_t *my_t, sfVector2f position);
void zone_2(my_s_w *my_w, my_s_t *my_t, sfVector2f position);
void zone_3(my_s_w *my_w, my_s_t *my_t, sfVector2f position);
void style_print(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w);
void dp(int nb, str_t *str, my_s_w *my_w, my_s_t *my_t);
void print_up(my_s_w *my_w, my_s_t *my_t, str_t *str, my_struct_up *up);
void tp(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w);
void tpr(my_s_t *my_t, my_s_s *my_st, my_s_w *my_w);
void pr_ame_tower(my_s_w *my_w, my_s_t *my_t, str_t *str);
void check_ame_tower(my_s_w *my_w, my_s_t *my_t, str_t *str);
void money_print(my_s_t *my_t, my_s_w *my_w, str_t *str, my_struct_up *up);
void close_tower(my_s_w *my_w, my_s_t *my_t, str_t *str);
void prz(my_s_w *my_w, my_s_t *my_t, int a, sfVector2f pos);
char *int_str(int a);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
int price_up(my_s_t *my_t);
void zomm(my_struct_sprite *my_s, my_s_w *my_w, sfVector2f pos_play);
int map(my_s_w *my_w, str_t *str);
void zone_4(my_s_w *my_w, my_s_t *my_t, sfVector2f position);
void create_map(my_s_w *my_w, my_struct_mm *my_mm);
void create3(my_struct_sprite *my_s, my_s_w *my_w, str_t *str);
void set_texture(str_t *str);
void set_sprite(str_t *str);
void set_background(str_t *str);
void prt2(my_s_w *my_w, my_s_t *my_t, int a, sfVector2f position);
void tower_42_pr(my_s_w *my_w, my_s_t *my_t, str_t *str);
int pose_t2(my_s_w *my_w, my_s_t *my_t, str_t *str, int a);
int nbr_place2(my_s_t *my_t, str_t *str, int x, int y);
int paus(my_s_t *my_t, m_p *my_p, my_s_w *my_w, str_t *str);
void get_all_path(int line, int coll, str_t *str, int i);
void set_spawn_mob(str_t_mob *str_m, my_s_w *my_w, str_t *str);
void set_back_mob(str_t_mob *str_m);
void set_sprite_mob(str_t_mob *str_m);
void set_texture_mob(str_t_mob *str_m);
void set_nb_block(str_t_mob *str_m);
void create4(my_s_w *my_w, my_struct_mm *my_mm);
void print_up2(my_s_w *my_w, my_s_t *my_t, my_struct_up *up);
void zone_yn(my_s_w *my_w, my_s_t *my_t);
int check_all(int ac, char **av, char **env);
int my_putstr(char const *str);
void mob_1(str_t_mob *str_m, str_t *str, int i);
void mob_2(str_t_mob *str_m, str_t *str, int i);
void mob_3(str_t_mob *str_m, str_t *str, int i);
void get_all_wave(str_t_mob *str_m);
void check_life_mob(str_t_mob *str_m, str_t *str, int i);
void check_casle(str_t_mob *str_m, str_t *str, int i, my_s_w *my_w);
void check_wave(str_t_mob *str_m, str_t *str, int i);
void set_life(str_t_mob *str_m, int i, str_t *str);
void tower_ch(my_s_w *my_w, my_s_t *my_t, str_t *str, str_t_mob *str_m);
void draw_mob(str_t *str, my_s_w *my_w, str_t_mob *str_m, my_s_t *my_t);
void draw_pos_biss(int nb, str_t *str, my_s_w *my_w);
void draw_pos(int nb, str_t *str, my_s_w *my_w);
int check_pos(my_s_w *my_w, my_s_t *my_t);
int pose_t(my_s_w *my_w, my_s_t *my_t, str_t *str, int a);
void print_t(my_s_w *my_w, my_s_t *my_t, int a);
void check_po(my_s_w *my_w, my_struct_mm *my_mm);
void set_good_map(my_s_w *my_w, my_struct_mm *my_mm, str_t *str);
int rand_1(str_t_mob *str_m, int nb, int count);
void destroy_all_mob(str_t_mob *str_m);
void create_wave(str_t_mob *str_m, int nb);
void check_a(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
int check_a_2(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
int check_a_3(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void check_a_4(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void check_a_5(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void check_a_6(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void check_a_7(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void check_a_8(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void check_a_9(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);
void t_f_1(my_s_t *my_t, str_t_mob *str_m);
void t_f_2(my_s_t *my_t, str_t_mob *str_m);
void t_f_3(my_s_t *my_t, str_t_mob *str_m);
void t_f_4(my_s_t *my_t, str_t_mob *str_m);
void t_f_5(my_s_t *my_t, str_t_mob *str_m);
void t_f_6(my_s_t *my_t, str_t_mob *str_m);
void t_f_7(my_s_t *my_t, str_t_mob *str_m);
void t_f_8(my_s_t *my_t, str_t_mob *str_m);
void t_f_9(my_s_t *my_t, str_t_mob *str_m);
int check_t1(sfVector2f mob, sfVector2f tower);
void set_all_that_s(str_t_mob *str_m, int nb, int i);
void set_all_that_s_1(str_t_mob *str_m, int nb, int i);
void set_all_that_s_2(str_t_mob *str_m, int nb, int i);
void set_all_that_s_3(str_t_mob *str_m, int nb, int i);
int check_t2(sfVector2f mob, sfVector2f tower);
int check_t3(sfVector2f mob, sfVector2f tower);
void malloc_wave(str_t_mob *str_m);
int my_getnbr(char *str);
void up_money(my_s_t *my_t);
void loose(str_t *str, my_s_w *my_w);
void win(str_t *str, my_s_w *my_w, str_t_mob *str_m);
void choose_end(str_t *str, my_s_w *my_w);
void draw(str_t *str, my_s_w *my_w, str_t_mob *str_m, my_s_t *my_t);
int check_t4(sfVector2f mob, sfVector2f tower);
void t_f_10(my_s_t *my_t, str_t_mob *str_m);
void check_a_10(sfVector2f tower, str_t_mob *str_m, my_s_t *my_t);

#endif
