#include "doom.h"

int			hit_sphere(t_vector3 center, t_vector3 orig, t_vector3 dir, float radius)
{
	t_vector3	oc;
	float		desc;
	float		a;
	float		b;
	float		c;

	oc = ft_vec3_sub(&orig, &center);
	a = ft_vec3_dot_product(&dir, &dir);
	b = 2.0 * ft_vec3_dot_product(&oc, &dir);
	c = ft_vec3_dot_product(&oc, &oc) - radius * radius;
	desc = b * b - 4 * a * c;

	return (desc > 0);
}

t_vector3	ft_color(t_vector3 dir)
{
	t_vector3	unit_dir;
	float		t;
	t_vector3	vec_1;
	t_vector3	vec_05;
	t_vector3	vec_12;
	t_vector3	vec_052;

	if (hit_sphere((t_vector3){0.0, 0.0, -1.0, 0.0}, (t_vector3){0.0, 0.0, 0.0, 0.0}, dir, 0.5))
		return ((t_vector3){0.5, 0.3, 1.0, 0.0});
	vec_1 = (t_vector3){1.0, 1.0, 1.0, 0.0};
	vec_05 = (t_vector3){0.5, 0.7, 1.0, 0.0};
	unit_dir = ft_vec3_normalize(&dir);
	t = 0.5 * (unit_dir.y + 1.0);

	vec_12 = ft_vec3_scalar_product(&vec_1, (1.0 - t));
	vec_052 = ft_vec3_scalar_product(&vec_05, t);

	return ((t_vector3)ft_vec3_add(vec_12, vec_052));
}

void		ft_render_redraw(t_wolf3d *w, t_list *dom)
{
	(void)dom;
	float x;
	float y;
	int wid = 0;
	float u;
	float v;
	t_vector3 col;
	t_vector3 *orig;
	t_vector3 *left_corner;
	t_vector3 *horizontal;
	t_vector3 *vertical;


	orig = ft_my_malloc(sizeof(t_vector3));
	left_corner = ft_my_malloc(sizeof(t_vector3));
	horizontal = ft_my_malloc(sizeof(t_vector3));
	vertical = ft_my_malloc(sizeof(t_vector3));

	*orig = (t_vector3){0.0, 0.0, -5.0, 0.0};
	*left_corner = (t_vector3){-16.0, -9.0, -9.0, 0.0};
	*horizontal = (t_vector3){32.0, 0.0, 0.0, 0.0};
	*vertical = (t_vector3){0.0, 18.0, 0.0, 0.0};

	x = 0;
	y = WIN_HEIGHT - 1;
	wid = 0;

	while (y >= 0 && wid < WIN_HEIGHT)
	{
		x = 0;
		while (x < WIN_WIDTH)
		{
			u = (float)(x / WIN_WIDTH);
			v = (float)(y / WIN_HEIGHT);
			col = ft_color(ft_vec3_create(*orig , ft_vec3_add(ft_vec3_add(*left_corner, \
				ft_vec3_scalar_product(horizontal, u)), ft_vec3_scalar_product(vertical, v))));
			// col = (t_vector3){x / WIN_WIDTH, y / WIN_HEIGHT, 0.2, 0.0};
			int ir = (255.99 * col.x);
			int ig = (255.99 * col.y);
			int ib = (255.99 * col.z);
			w->sdl->pixels[(int)wid*WIN_WIDTH + (int)x] = ft_rgb_to_hex(ir,ig,ib);
			x++;
		}
		wid++;
		y--;
	}
}