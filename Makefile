##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/create.c	\
		src/destroy.c	\
		src/menu.c	\
		src/create_mob.c	\
		src/draw_mob.c		\
		src/menu_params.c	\
		src/get_all_path.c	\
		src/set_all_mob.c	\
		src/moov_mob_1.c	\
		src/moov_mob_2.c	\
		src/moov_mob_3.c	\
		src/get_map.c		\
		src/create_game.c	\
		src/draw_map.c	\
		src/zone.c	\
		src/draw_gra.c	\
		src/time.c	\
		src/tower.c	\
		src/upgrade.c	\
		src/money.c	\
		src/zone_pr.c	\
		src/check_tower.c	\
		src/int_str.c	\
		src/my_revstr.c	\
		src/my_strcpy.c	\
		src/menu_scale.c	\
		src/zone_4.c	\
		src/map_menu.c	\
		src/create_map.c	\
		src/create2.c	\
		src/tower2.c	\
		src/draw_gra2.c	\
		src/pose_t2.c	\
		src/upgrade2.c	\
		src/pause.c	\
		src/print_up2.c	\
		src/zone_yn.c	\
		src/check_all.c	\
		src/my_putstr.c	\
		src/get_all_wave.c	\
		src/check_life_mob.c	\
		src/fire_tower.c	\
		src/draw_pos.c	\
		src/check_tower2.c	\
		src/check_pos_map.c	\
		src/set_good_map.c	\
		src/check_t1.c	\
		src/check_t2.c	\
		src/check_t3.c	\
		src/check_a_1.c	\
		src/check_a_2.c	\
		src/tf_1.c	\
		src/tf_2.c	\
		src/get_wave_2.c	\
		src/get_wave_3.c	\
		src/my_getnbr.c		\
		src/money_handle.c	\
		src/end.c		\
		src/game_loop.c	\

NAME    =	my_defender

OBJ     =	$(SRC:.c=.o)

CFLAGS  =	-I./include -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf vg*
	rm -rf *~
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
