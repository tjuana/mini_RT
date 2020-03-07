#include "doom.h"

void		ft_render_redraw(t_wolf3d *w, t_list *dom)
{
	(void)dom;
	float x;
	float y;
	int wid = 0;
	t_vector3 col;

	x = 0;
	y = WIN_HEIGHT;

	while (y >= 0 && wid < WIN_HEIGHT)
	{
		x = 0;
		while (x < WIN_WIDTH)
		{
			col = (t_vector3){x / WIN_WIDTH, y / WIN_HEIGHT, 0.2, 0.0};
			int ir = 255.99 * col.x;
			int ig = 255.99 * col.y;
			int ib = 255.99 * col.z;
			w->sdl->pixels[(int)wid*WIN_WIDTH + (int)x] = ft_rgb_to_hex(ir,ig,ib);
			x++;
		}
		wid++;
		y--;
	}
}