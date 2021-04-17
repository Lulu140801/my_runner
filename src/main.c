/*
** EPITECH PROJECT, 2020
** main
** File description:
** opening a window
*/

#include "../include/my.h"

int display_3(sfRenderWindow *windows, int a, sfEvent event)
{
    sfSprite *background_option = display_background("image/image3.png");

    sfRenderWindow_display(windows);
    sfRenderWindow_drawSprite(windows, background_option, NULL);
    a = analyse_events(windows, event, a);
    sfSprite_destroy(background_option);
    return (a);
}

void display_2(sfRenderWindow *wind, sfSprite *b1, sfSprite *b2, sfSprite *b3)
{
    sfRenderWindow_display(wind);
    sfRenderWindow_drawSprite(wind, b1, NULL);
    sfRenderWindow_drawSprite(wind, b2, NULL);
    sfRenderWindow_drawSprite(wind, b3, NULL);
}

int display_1(sfRenderWindow *windows, int a, sfEvent event)
{
    sfSprite *background_menu = display_background("image/image2.png");

    sfRenderWindow_display(windows);
    sfRenderWindow_drawSprite(windows, background_menu, NULL);
    a = analyse_events(windows, event, a);
    sfSprite_destroy(background_menu);
    return (a);
}

void display(sfRenderWindow *wind, sfIntRect r1, sfEvent event, sfIntRect r2)
{
    sfIntRect r3 =  {0, 0, 900, 700};
    sfIntRect r4 =  {0, 0, 900, 700};
    sfSprite *duck = display_duck();
    sfSprite *b1 = display_background("image/image.png");
    sfSprite *b2 = display_background("image/image4.png");
    sfSprite *b3 = display_background2("image/image4.png");

    for (int n = 30000, a = 0; sfRenderWindow_isOpen(wind);) {
        if (a == 0)
            a = display_1(wind, a, event);
        if (a == 1) {
            display_2(wind, b1, b2, b3);
            sfRenderWindow_drawSprite(wind, duck, NULL);
            anime_paralax(b1, &r2, "image/image.png");
            anime_paralax2(b2, &r3, "image/image4.png");
            anime_paralax3(b3, &r4, "image/image5.png");
            anime_duck(duck, &r1);
            a = analyse_events(wind, event, a);
            clock(n);
        } else if (a == 2)
            a = display_3(wind, a, event);
        if (a == 3)
            sfRenderWindow_close(wind);
        sfRenderWindow_setFramerateLimit(wind, 30);
    }
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Finite runner created with CSFML.\n\nUSAGE\n");
        my_putstr("  ./my_runner map.txt\n\n\nOPTION\n");
        my_putstr("  -i\t\t    lauch the game in infinity mode.\n");
        my_putstr("  -h\t\t    print the usage and quit.\n\n");
        my_putstr("USER INTERACTIONS\n  SPACE_KEY\t    jump.\n");
        return (0);
    }
    sfRenderWindow  *windows;
    sfEvent event;
    sfVideoMode video = {900, 700, 32};
    sfIntRect rect =  {0, 0, 190, 190};
    sfIntRect rect2 =  {0, 0, 900, 700};

    windows = sfRenderWindow_create(video, "Runner", sfDefaultStyle, NULL);
    display(windows, rect, event, rect2);
    sfRenderWindow_destroy(windows);
    return (0);
}