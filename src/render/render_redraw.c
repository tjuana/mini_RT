#include "doom.h"

void		ft_render_redraw(t_wolf3d *w, t_list *dom)
{
	(void)dom;
	float x;
	float y;
	int wid = 0;
	float r;
	float g;
	float b;

	x = 0;
	y = WIN_HEIGHT;
	while (y >= 0 && wid < WIN_HEIGHT)
	{
		x = 0;
		while (x < WIN_WIDTH)
		{
			r = x / WIN_WIDTH;
			g = y / WIN_HEIGHT;
			b = 0.2;
			int ir = 255.99*r;
			int ig = 255.99*g;
			int ib = 255.99*b;
			w->sdl->pixels[(int)wid*WIN_WIDTH + (int)x] = ft_rgb_to_hex(ir,ig,ib);
			x++;
		}
		wid++;
		y--;
	}
}