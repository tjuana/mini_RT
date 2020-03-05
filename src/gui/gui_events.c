/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gui_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorange- <dorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:44:00 by dorange-          #+#    #+#             */
/*   Updated: 2020/03/05 16:26:03 by dorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

/*
** **************************************************************************
**	void ft_gui_events_keydown_me(t_wolf3d *w, SDL_Event *e)
** **************************************************************************
*/

void	ft_gui_events_keydown_me(t_wolf3d *w, SDL_Event *e)
{
	(void)e;
	ft_gui_redraw(w);
}

/*
** **************************************************************************
**	void ft_gui_events_keydown(t_wolf3d *w, SDL_Event *e)
** **************************************************************************
*/

void	ft_gui_events_keydown(t_wolf3d *w, SDL_Event *e)
{
	if (e->type == SDL_KEYDOWN)
	{
		if (w->gui.mode == GUI_MD_MENU)
		{
			(e->key.keysym.scancode == SDL_SCANCODE_ESCAPE) ? \
				w->sdl->running = 0 : 0;
		}
		if (w->gui.mode == GUI_MD_ME)
			ft_gui_events_keydown_me(w, e);
		if (w->gui.focus_elem != NULL)
			ft_gui_focus_keydown(w, *e, w->gui.focus_elem);
	}
}

/*
** **************************************************************************
**	void ft_gui_events(t_wolf3d *w)
**
**	Function that handle user events.
** **************************************************************************
*/

void	ft_gui_events(t_wolf3d *w)
{
	SDL_Event e;

	while (SDL_PollEvent(&e))
	{
		e.type == SDL_QUIT ? w->sdl->running = 0 : 0;
		ft_gui_events_keydown(w, &e);
		ft_gui_events_mouse(w, &e);
	}
	if (w->gui.search_elem == GUI_EVENT_ON || \
		w->gui.search_elem == GUI_EVENT_SEARCH)
	{
		ft_gui_redraw(w);
		w->gui.search_elem = GUI_EVENT_OFF;
	}
}
