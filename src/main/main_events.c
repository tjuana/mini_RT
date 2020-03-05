#include "doom.h"

void	ft_main_events(t_wolf3d *w)
{
	if (w->gui.mode == GUI_MD_GAME)
		ft_gui_redraw(w);
	else
		ft_gui_events(w);
}
