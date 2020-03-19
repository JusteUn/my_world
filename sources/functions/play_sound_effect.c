/*
** EPITECH PROJECT, 2020
** play_sound_effect.c
** File description:
** play_sound_effect
*/

#include "my_world.h"

void play_sound_effect(game_setup_t *s)
{
    s->error = 0;
    sfMusic_destroy(s->sound_effect);
    sfMusic_pause(s->music);
    s->sound_effect = sfMusic_createFromFile\
    ("resources/music/sound_effect.ogg");
    if (!s->sound_effect) {
        s->error = 1;
        return;
    }
    sfMusic_play(s->sound_effect);
    sfMusic_play(s->music);
}