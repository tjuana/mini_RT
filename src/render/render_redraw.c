#include "doom.h"

void		ft_render_redraw(t_wolf3d *w, t_list *dom)
{
    (void)dom;
    ft_gui_fill_area(w, \
        (t_gui_coord){100, 100, 0}, \
        (t_gui_coord){200, 200, 0}, \
        0xff0000);
}