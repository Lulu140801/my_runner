/*
** EPITECH PROJECT, 2020
** anime_duck
** File description:
** opening a window
*/

#include "../include/my.h"

sfSprite *anime_duck(sfSprite *duck, sfIntRect *rect)
{
    int *nb = &rect -> left;

    if (*nb + 190 == 1140)
        *nb = 0;
    else
        *nb =  *nb + 190;
    sfTexture *texture;
    texture = sfTexture_createFromFile("image/p.png", rect);
    sfSprite_setTexture(duck, texture, sfFalse);
    free(texture);
    return (duck);
}

sfSprite *anime_paralax(sfSprite *background, sfIntRect *rect, char *str)
{
    int *nb = &rect -> left;

    if (*nb + 1 >= 7930)
        *nb = 0;
    else
        *nb =  *nb + 3;
    sfTexture *texture;
    texture = sfTexture_createFromFile(str, rect);
    sfSprite_setTexture(background, texture, sfFalse);
    free(texture);
    return (background);
}

sfSprite *anime_paralax2(sfSprite *background, sfIntRect *rect, char *str)
{
    int *nb = &rect -> left;

    if (*nb + 4 >= 2015)
        *nb = 0;
    else
        *nb =  *nb + 6;
    sfTexture *texture;
    texture = sfTexture_createFromFile(str, rect);
    sfSprite_setTexture(background, texture, sfFalse);
    free(texture);
    return (background);
}

sfSprite *anime_paralax3(sfSprite *background, sfIntRect *rect, char *str)
{
    int *nb = &rect -> left;

    if (*nb + 3 >= 561)
        *nb = 0;
    else
        *nb =  *nb + 3;
    sfTexture *texture;
    texture = sfTexture_createFromFile(str, rect);
    sfSprite_setTexture(background, texture, sfFalse);
    free(texture);
    return (background);
}
