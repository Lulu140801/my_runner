/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** header
*/



#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>

sfSprite *display_duck(void);
sfSprite *anime_duck(sfSprite *duck, sfIntRect *rect);
sfSprite *anime_paralax(sfSprite *background, sfIntRect *rect, char *str);
sfSprite *anime_paralax2(sfSprite *background, sfIntRect *rect, char *str);
sfSprite *anime_paralax3(sfSprite *background, sfIntRect *rect, char *str);
sfSprite *display_background(char *str);
sfSprite *display_background2(char *str);
int analyse_events(sfRenderWindow *windows, sfEvent event, int a);
void clock(int nb);
void my_putstr(char const *str);
float move_duck(float x, sfSprite *duck);

#endif /* !MY_H_ */