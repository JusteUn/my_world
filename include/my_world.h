/*
** EPITECH PROJECT, 2020
** my_world.h
** File description:
** my_world
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/RenderWindow.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef MY_WORLD_H_
#define MY_WORLD_H_

/*                       STRUCT GLOBAL FUNCTION                     */
struct map_s
{
    int **map_3d;
    int **map_water;
    sfVector2f **map_2d;
    int map_x;
    int map_y;
    int gap_point;
}; typedef struct map_s map_t;

struct button_s
{
    sfRectangleShape *rect;
    sfVector2f size;
    sfColor color;
    sfVector2f pos;
}; typedef struct button_s button_t;

struct text_s
{
    sfText *text;
    sfVector2f pos;
    int size;
    sfColor color;
}; typedef struct text_s text_t;

struct game_assets_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
}; typedef struct game_assets_s game_assets_t;

/*                       STRUCT SET GAME                            */
struct game_setup_s
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfVector2f pos_exit_button;
    sfEvent event;
    sfFloatRect rect;
    sfView *view;
    sfFont *font;
    sfMusic *music;
    sfMusic *sound_effect;
    float volume;
    int switch_scene;
    int error;
    button_t *exit_button;
    text_t *exit_text;
    button_t *back_button;
    text_t *back_text;
    button_t *box_fps;
    button_t *box_vol;
    text_t *nb_fps;
    text_t *nb_vol;
    text_t *fps;
    text_t *vol;
    sfVector2i mouse_pos;
}; typedef struct game_setup_s game_setup_t;

/*                       STRUCT MENU                                */
struct menu_s
{
    game_assets_t *background;
    button_t *play_button;
    button_t *box_button;
    button_t *settings_button;
    text_t *play_text;
    text_t *settings_text;
    text_t *title_text;
}; typedef struct menu_s menu_t;

/*                       STRUCT SETTINGS                            */
struct settings_s
{
    button_t *framerate_60_button;
    button_t *framerate_45_button;
    button_t *framerate_30_button;
    text_t *framerate_60_text;
    text_t *framerate_45_text;
    text_t *framerate_30_text;
    text_t *framerate_text;
    text_t *title_text;
    button_t *cursor;
    button_t *scroll_bar;
    button_t *plus;
    button_t *sub;
    text_t *plus_text;
    text_t *sub_text;
    text_t *sound;
}; typedef struct settings_s settings_t;


/*                       STRUCT GAME                                */
struct game_object_s
{
    map_t map;
    int x_near;
    int y_near;
    int mouse_x;
    int mouse_y;
    button_t *box_size_map;
    button_t *plus_button;
    button_t *sub_button;
    text_t *plus_text;
    text_t *sub_text;
    text_t *map_x;
    text_t *cross;
    text_t *map_y;
    button_t *toolbar_box;
    button_t *select_tiles_button;
    button_t *select_corner_button;
    button_t *select_water_button;
    button_t *select_house_button;
    game_assets_t *select_tiles;
    game_assets_t *select_corner;
    game_assets_t *water;
    game_assets_t *house_button;
    game_assets_t *house_map;
    text_t *info_tiles_button;
    text_t *info_corner_button;
    text_t *info_water_button;
    text_t *info_house_button;
    int button_id;
    bool button_hover;
}; typedef struct game_object_s game_object_t;

/*                       GLOBAL STRUCT                              */
struct global_game_s
{
    game_setup_t *set;
    menu_t *menu;
    settings_t *settings;
    game_object_t *game;
    void (**scene)(struct global_game_s *global_game);
}; typedef struct global_game_s global_game_t;


/*                       PROTOTYPES                                 */

/*                       SOURCES FOLDER                             */
int main(int ac, char **av);
void game_loop(global_game_t *global_game);
int start_game(void);

/*                       ANALYSE FOLDER                             */
void analyse_key_pressed(global_game_t *global_game);
void manage_mouse_click_back_button(global_game_t *global_game);
void manage_mouse_click_exit_button(global_game_t *global_game);
/*                       ANALYSE EVENTS GAME FOLDER                 */
void view_control(global_game_t *g);
void manage_mouse_click_resize_map_button(global_game_t *global_game);
void update_game_map(global_game_t *global_game, int reset);
void search_near_point(global_game_t *global_game);
void analyse_events_game(global_game_t *global_game);
int get_near_point(global_game_t *g, int y, int temp);
void game_manage_mouse_click(global_game_t *global_game);
void manage_mouse_click_tiles_button(global_game_t *global_game);
void manage_mouse_click_corner_button(global_game_t *global_game);
void manage_mouse_click_water_button(global_game_t *global_game);
void manage_mouse_click_house_button(global_game_t *global_game);
/*                       ANALYSE EVENTS MENU FOLDER                 */
void menu_button_is_hover(global_game_t *global_game);
void analyse_events_menu(global_game_t *global_game);
void menu_manage_mouse_click(global_game_t *global_game);
/*                       ANALYSE EVENTS SETTINGS FOLDER             */
int analyse_events_settings(global_game_t *global_game);
void settings_move_vol_cursor(global_game_t *global_game);
int framerate_60_button(global_game_t *global_game);
int framerate_45_button(global_game_t *global_game);
int framerate_30_button(global_game_t *global_game);
int manage_framerate_button(global_game_t *g);
int settings_manage_mouse_click(global_game_t *global_game);

/*                       CREATE FOLDER                              */
int **create_3d_map(global_game_t *global_game);
sfVector2f **create_2d_map(global_game_t *global_game, int **map_3d);
int malloc_struct(global_game_t *global_game);
int create_button(button_t *button);
int create_sprite(game_assets_t *asset, char *path, int x, int y);
int create_text(global_game_t *global_game, text_t *text, char *str);

/*                       DESTOY_FREE FOLDER                         */
void free_2d_map(game_object_t *game);
void free_3d_map(game_object_t *game);
void free_map_water(game_object_t *game);
void destroy_struct_menu(menu_t *menu);
void destroy_var(global_game_t *global_game);
void destroy_struct_game(game_object_t *game);
void destroy_struct_game_setup(game_setup_t *set);
void destroy_struct_settings(settings_t *settings);
void destroy_all_struct(global_game_t *global_game);


/*                       FUNCTIONS FOLDER                           */
sfVector2f project_iso_point(int x, int y, int z, global_game_t *g);
void play_sound_effect(game_setup_t *s);
int my_strlen(char const *str);
int guess_nb_digits_in_nb(int nb);
char *convert_size_map_x_to_str(global_game_t *g, char *str);
char *convert_size_map_y_to_str(global_game_t *g, char *str);
char *convert_int_to_char(int nb, char *score);
sfVertexArray *create_line(sfVector2f *point1, sfVector2f *point2);
void is_button_hover(global_game_t *g, button_t *button, \
sfVector2i mouse_pos, sfColor color);
sfConvexShape *create_triangle(sfVector2f point1, sfVector2f point2, \
sfVector2f point3, sfColor color);

/*                       INIT FOLDER                                */
global_game_t *global_init(void);
/*                       INIT GAME                                  */
int init_game(global_game_t *global_game);
int info_tiles_button(global_game_t *global_game);
int info_corner_button(global_game_t *global_game);
int info_water_button(global_game_t *global_game);
int info_house_button(global_game_t *global_game);
int init_game_plus_button(global_game_t *global_game);
int init_game_sub_button(global_game_t *global_game);
int init_game_text_map_x(global_game_t *g);
int init_game_text_map_y(global_game_t *g);
int init_game_text_cross(global_game_t *g);
int init_game_text_plus_button(global_game_t *global_game);
int init_game_text_sub_button(global_game_t *global_game);
int init_game_toolbar_box(global_game_t *global_game);
int init_box_size_map(global_game_t *global_game);
int init_toolbar_button(global_game_t *global_game);
int init_sprite_select_water(global_game_t *global_game);
int init_button_select_water(global_game_t *global_game);
int init_sprite_select_house(global_game_t *global_game);
int init_button_select_house(global_game_t *global_game);
/*                       INIT GAME SETUP                            */
int init_window(game_setup_t *set);
int init_music_font(game_setup_t *set);
int init_view(game_setup_t *set);
int init_text_fps(global_game_t *global_game);
int init_text_nb_fps(global_game_t *global_game);
int init_box_fps(global_game_t *global_game);
void init_game_setup_var(game_setup_t *set);
int init_game_setup(global_game_t *global_game);
int init_exit_button_text(global_game_t *global_game);
int init_exit_button(global_game_t *global_game);
int init_text_back_button(global_game_t *global_game);
int init_back_button(global_game_t *global_game);
int new_text(global_game_t *g);
/*                       INIT MENU                                  */
int init_menu(global_game_t *global_game);
int init_box_menu(global_game_t *global_game);
int init_menu_text(global_game_t *global_game);
int init_button_play(global_game_t *global_game);
/*                       INIT SETTINGS                              */

int init_settings(global_game_t *global_game);
int init_text_settings(global_game_t *global_game);
int init_button_settings(global_game_t *global_game);
int init_settings_back_text(global_game_t *global_game);

int init_settings_title_text(global_game_t *global_game);
int init_settings_back_button(global_game_t *global_game);

//TEXT TO CONTROL VOL
int init_settings_sound_text(global_game_t *global_game);
int init_settings_plus_text(global_game_t *global_game);
int init_settings_sub_text(global_game_t *global_game);

//BUTTON TO CONTROL VOL
int init_settings_vol_cursor(global_game_t *global_game);
int init_settings_vol_scrollbar_button(global_game_t *global_game);
int init_settings_vol_plus_button(global_game_t *global_game);
int init_settings_vol_sub_button(global_game_t *global_game);

//BUTTON TO CONTROL FRAMERATE
int init_60_framerate_button(global_game_t *global_game);
int init_45_framerate_button(global_game_t *global_game);
int init_30_framerate_button(global_game_t *global_game);

// TEXT TO CONTROL FRAMERATE
int init_settings_framerate_text(global_game_t *global_game);
int init_settings_60_framerate_text(global_game_t *global_game);
int init_settings_45_framerate_text(global_game_t *global_game);
int init_settings_30_framerate_text(global_game_t *global_game);

/*                       SCENE FOLDER                               */
/*                       DISPLAY FOLDER                             */
void draw_exit_button(global_game_t *global_game);
void draw_back_button(global_game_t *global_game);
void draw_nb_fps(global_game_t *global_game);
void draw_transparent_box(global_game_t *global_game);
/*                       GAME FOLDER                                */
void game(global_game_t *global_game);
/*                       DISPLAY FOLDER                             */
void draw_2d_map(global_game_t *global_game);
void button_hover_toolbar(global_game_t *g);
void button_toolbar_is_select(global_game_t *global_game);
void display_resize_map_button(global_game_t *global_game);
int display_triangle_shadow(global_game_t *g, int x, int y);
int display_triangle_grass(global_game_t *g, int x, int y);
int display_triangle_water(global_game_t *g, int x, int y);
int display_house(global_game_t *g, int x, int y);
void display_game(global_game_t *global_game);

/*                       MENU FOLDER                                */
void menu(global_game_t *global_game);
void button_hover_menu(global_game_t *global_game);
/*                       DISPLAY FOLDER                             */
void draw_text_menu(global_game_t *global_game);
void draw_sprite_menu(global_game_t *global_game);
void draw_rectangle_shape_menu(global_game_t *global_game);

/*                       SETTINGS FOLDER                            */
void settings(global_game_t *global_game);
void draw_volume(global_game_t *global_game);
void draw_settings_text(global_game_t *global_game);
void draw_vol_text(global_game_t *global_game);
void button_hover_settings(global_game_t *global_game);
/*                       DISPLAY FOLDER                             */
void draw_rectangle_shape_settings(global_game_t *global_game);

/*                       SET FOLDER                                 */
int set_new_size_sub_button(global_game_t *g);
int new_map(global_game_t *g);
int set_new_size_plus_button(global_game_t *g);
void set_scene(global_game_t *global_game);
void set_struct_var(global_game_t *global_game);
#endif /* !MY_WORLD_H_ */