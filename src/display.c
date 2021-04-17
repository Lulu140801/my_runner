/*
** EPITECH PROJECT, 2020
** display_background
** File description:
** opening a window
*/

#include "../include/my.h"

sfSprite *display_duck(void)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();

    texture = sfTexture_createFromFile("image/p.png", &(sfIntRect) {0, 0, 190, 190});
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setPosition(sprite, (sfVector2f) {-15, 470});
    free(texture);
    return (sprite);
}

sfSprite *display_background(char *str)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();

    texture = sfTexture_createFromFile(str, &(sfIntRect) {0, 0, 900, 700});
    sfSprite_setTexture(sprite, texture, sfFalse);
    free(texture);
    return (sprite);
}

sfSprite *display_background2(char *str)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();

    texture = sfTexture_createFromFile(str, &(sfIntRect) {0, 0, 900, 700});
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setPosition(sprite, (sfVector2f) {0, 0});
    free(texture);
    return (sprite);
}