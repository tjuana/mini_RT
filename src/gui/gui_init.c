#include "doom.h"

/*
** **************************************************************************
**	void ft_gui_init(t_wolf3d *w)
**
**	Function that set gui constant.
** **************************************************************************
*/

void	ft_gui_init(t_wolf3d *w)
{
	w->gui.win_w = WIN_WIDTH;
	w->gui.win_h = WIN_HEIGHT;
	w->gui.focus_elem = NULL;
	w->gui.mode = GUI_MD_MENU;
}
