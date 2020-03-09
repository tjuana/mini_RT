#ifndef GENERAL_STRUCT_H
# define GENERAL_STRUCT_H

# include "doom.h"

# include <libft.h>
# include "gui_struct.h"
# include "SDL2/SDL_mixer.h"

/*
** **************************************************************************
**	Define for music and sound
** **************************************************************************
*/
# define SONG_0			"music/wolf3d_menu.mp3"
# define SONG_1			"music/song_1.mp3"
# define SONG_2			"music/song_2.mp3"
# define SHOT			"music/shot.wav"

typedef struct			s_font
{
	TTF_Font			*ptr_font_18_m;
	TTF_Font			*ptr_font_14_m;
	TTF_Font			*ptr;
	SDL_Color			color;
	int					f_sz;
	int					g_sz;
	int					w;
	int					h;
	int					half_menu;
}						t_font;

typedef struct			s_sdl
{
	SDL_Surface			*srf;
	int					running;
	SDL_Window			*win;
	SDL_Renderer		*renderer;
	Uint32				*pixels;
	SDL_Texture			*text;
	SDL_Texture			*text2;
	t_font				font;
	unsigned char		i;
	Mix_Music			*music;
}						t_sdl;

typedef struct			s_wolf3d
{
	int					player_status;
	t_sdl				*sdl;
	t_gui				gui;
	void				*new_data;
}						t_wolf3d;

#endif
