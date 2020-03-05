#include "doom.h"

void		ft_sdl_error(t_sdl *sdl)
{
	SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, \
	"Couldn't create window and renderer: %s", SDL_GetError());
	if (sdl->text)
		SDL_DestroyTexture(sdl->text);
	if (sdl->renderer)
		SDL_DestroyRenderer(sdl->renderer);
	if (sdl->win)
		SDL_DestroyWindow(sdl->win);
	free(sdl);
	IMG_Quit();
	Mix_CloseAudio();
	SDL_Quit();
	system("osascript -e \'display notification\"In terminal log of error\" \
		with title \"SDL, bro!\"\'");
	exit(EXIT_FAILURE);
}