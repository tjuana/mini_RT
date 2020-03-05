#include "doom.h"

/*
** **************************************************************************
**	void ft_gui_mousemotion(t_wolf3d *w, SDL_Event e, t_list *dom)
**
**	Function that search event for mousemotion.
** **************************************************************************
*/

void	ft_gui_mousemotion(t_wolf3d *w, SDL_Event e, t_list *dom)
{
	ft_gui_init_mouse_pos(w);
	w->gui.search_elem = GUI_EVENT_SEARCH;
	ft_gui_event_search_elem(w, e, dom, SDL_MOUSEMOTION);
}

/*
** **************************************************************************
**	void ft_gui_mousebuttondown(t_wolf3d *w, SDL_Event e, t_list *dom)
**
**	Function that search event for mousebuttondown.
** **************************************************************************
*/

void	ft_gui_mousebuttondown(t_wolf3d *w, SDL_Event e, t_list *dom)
{
	ft_gui_init_mouse_pos(w);
	w->gui.search_elem = GUI_EVENT_SEARCH;
	ft_gui_event_search_elem(w, e, dom, SDL_MOUSEBUTTONDOWN);
}

/*
** **************************************************************************
**	void ft_gui_mousebuttonup(t_wolf3d *w, SDL_Event e, t_list *dom)
**
**	Function that search event for mousebuttonup.
** **************************************************************************
*/

void	ft_gui_mousebuttonup(t_wolf3d *w, SDL_Event e, t_list *dom)
{
	ft_gui_init_mouse_pos(w);
	w->gui.search_elem = GUI_EVENT_SEARCH;
	ft_gui_event_search_elem(w, e, dom, SDL_MOUSEBUTTONUP);
}

/*
** **************************************************************************
**	void ft_gui_mousewheel(t_wolf3d *w, SDL_Event e, t_list *dom)
**
**	Function that search event for mousewheel.
** **************************************************************************
*/

void	ft_gui_mousewheel(t_wolf3d *w, SDL_Event e, t_list *dom)
{
	ft_gui_init_mouse_pos(w);
	w->gui.search_elem = GUI_EVENT_SEARCH;
	ft_gui_event_search_elem(w, e, dom, SDL_MOUSEWHEEL);
}
