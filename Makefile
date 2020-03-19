##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

NAME					=	my_world

PATH_SRC 				= 	sources

PATH_ANALYSE			= 	analyse

PATH_ANALYSE_G			= 	analyse_events_game

PATH_ANALYSE_M			= 	analyse_events_menu

PATH_ANALYSE_S			= 	analyse_events_settings

PATH_CREATE 			= 	create

PATH_DESTROY_FREE		=	destroy_free

PATH_FUNCTIONS 			= 	functions

PATH_INIT 				= 	init

PATH_INIT_GAME 			= 	init_game

PATH_INIT_GAME_SETUP	= 	init_game_setup

PATH_INIT_MENU 			= 	init_menu

PATH_INIT_SETTINGS		= 	init_settings

PATH_SCENE 				=	scenes

PATH_GAME 				= 	game

PATH_DISPLAY			= 	display

PATH_MENU 				=	menu

PATH_SETTINGS 			=	settings

PATH_SET				=	set

SRC						=	$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/analyse_events_game.c 								\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/game_manage_mouse_click.c 							\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/manage_mouse_click_resize_map_button.c 				\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/search_near_point.c 									\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/update_game_map.c 									\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/view.c 												\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_G)/manage_mouse_click_tiles_button.c						\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_M)/analyse_events_menu.c 								\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_M)/menu_button_hover.c									\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_M)/menu_manage_mouse_click.c								\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_S)/analyse_events_settings.c								\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_S)/manage_framerate_button.c								\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_S)/settings_manage_mouse_click.c							\
							$(PATH_SRC)/$(PATH_ANALYSE)/$(PATH_ANALYSE_S)/settings_move_vol_cursor.c							\
							$(PATH_SRC)/$(PATH_ANALYSE)/analyse_key_pressed.c													\
							$(PATH_SRC)/$(PATH_ANALYSE)/manage_mouse_click_back_button.c										\
							$(PATH_SRC)/$(PATH_ANALYSE)/manage_mouse_click_exit_button.c										\
							$(PATH_SRC)/$(PATH_CREATE)/create_2d_map.c															\
							$(PATH_SRC)/$(PATH_CREATE)/create_3d_map.c															\
							$(PATH_SRC)/$(PATH_CREATE)/create_button.c															\
							$(PATH_SRC)/$(PATH_CREATE)/create_sprite.c															\
							$(PATH_SRC)/$(PATH_CREATE)/create_text.c															\
							$(PATH_SRC)/$(PATH_CREATE)/malloc_struct.c															\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/destroy_all_struct.c 												\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/destroy_game_setup.c 												\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/destroy_game.c		 												\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/destroy_menu.c 													\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/destroy_settings.c 												\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/destroy_var.c														\
							$(PATH_SRC)/$(PATH_DESTROY_FREE)/free_map.c															\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/button_hover.c 	 													\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/convert_int_to_char.c	 												\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/convert_size_map_int_to_str.c											\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/create_triangle.c	 													\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/guess_nb_digits_in_nb.c												\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/line.c 																\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/my_strlen.c 															\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/play_sound_effect.c 													\
							$(PATH_SRC)/$(PATH_FUNCTIONS)/project_iso_point.c 													\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_button_resize_map.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_game.c												\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_text_hover.c										\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_text_resize_map_button.c							\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_toolbar_box.c										\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_toolbar_button.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME)/init_water_button.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME_SETUP)/init_back_button.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME_SETUP)/init_box_fps_vol.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME_SETUP)/init_exit_button.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_GAME_SETUP)/init_game_setup.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_MENU)/init_box_menu.c											\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_MENU)/init_button_menu.c										\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_MENU)/init_menu.c												\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_SETTINGS)/init_framerate_button.c								\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_SETTINGS)/init_settings_text.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_SETTINGS)/init_settings.c										\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_SETTINGS)/init_vol_button.c									\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_SETTINGS)/init_vol_text.c										\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_SETTINGS)/init_framerate_text.c								\
							$(PATH_SRC)/$(PATH_INIT)/$(PATH_INIT_MENU)/init_text_menu.c											\
							$(PATH_SRC)/$(PATH_INIT)/global_init.c																\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_DISPLAY)/draw_back_button.c										\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_DISPLAY)/draw_exit_button.c										\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_DISPLAY)/draw_nb_fps.c												\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_DISPLAY)/draw_transparent_box.c									\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/button_hover_toolbar.c						\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/button_toolbar_is_select.c					\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/display_house.c								\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/display_map.c								\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/display_resize_map_button.c					\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/display_triangle.c							\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/$(PATH_DISPLAY)/display_water.c								\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_GAME)/game.c 														\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_MENU)/$(PATH_DISPLAY)/draw_rectangle_shape_menu.c					\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_MENU)/$(PATH_DISPLAY)/draw_sprite_menu.c							\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_MENU)/$(PATH_DISPLAY)/draw_text_menu.c								\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_MENU)/menu.c 														\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_MENU)/button_hover_menu.c 											\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_SETTINGS)/$(PATH_DISPLAY)/draw_rectangle_shape_settings.c			\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_SETTINGS)/$(PATH_DISPLAY)/draw_text_settings.c						\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_SETTINGS)/settings.c 												\
							$(PATH_SRC)/$(PATH_SCENE)/$(PATH_SETTINGS)/button_hover_settings.c 									\
							$(PATH_SRC)/$(PATH_SET)/set_new_size_map.c 															\
							$(PATH_SRC)/$(PATH_SET)/set_scene.c 																\
							$(PATH_SRC)/$(PATH_SET)/set_struct_var.c 															\
							$(PATH_SRC)/game_loop.c																				\
							$(PATH_SRC)/main.c 																					\
							$(PATH_SRC)/my_world.c 																				\

OBJ						= 	$(SRC:%.c=%.o)

INCLUDE					=	-I include

CFLAGS					= 	-W -Wextra -Wall -Wshadow $(INCLUDE)

LIB_DIR 				=

LIB						=	-L $(LIB_DIR) -lmy

LDFLAGS					=	$(LIB) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio -lm

CC 						= 	gcc

all						:	$(NAME)

$(NAME)					:	$(OBJ)
							$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean					:
							$(RM) $(OBJ)
							$(RM) $(NAME)

fclean					:	clean
							$(RM) $(NAME)

re						: 	fclean all

.PHONY					:	all clean fclean re