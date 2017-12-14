/*
** EPITECH PROJECT, 2017
** CPool_Day13_2017
** File description:
** CSFML learning
*/

#include "include/my.h"

int main(void)
{
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow* window;
	sfTexture* texture;
	sfSprite* sprite;
	sfEvent event;

	window = sfRenderWindow_create(mode, "SFML", sfClose | sfResize, NULL);
	if (!window)
		return EXIT_FAILURE;
	while (sfRenderWindow_isOpen(window)) {
		while (sfRenderWindow_pollEvent(window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
		}
		sfRenderWindow_clear(window, sfBlack);
		sfRenderWindow_display(window);
	}
	sfRenderWindow_destroy(window);
	return EXIT_SUCCESS;
}
