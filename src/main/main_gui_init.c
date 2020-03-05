/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gui_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorange- <dorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:36:24 by dorange-          #+#    #+#             */
/*   Updated: 2020/03/05 17:29:08 by dorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

void	ft_main_gui_init_win_1(t_list *head)
{
	t_gui_elem	*win;

	win = head->content;
	ft_gui_elem_init(&win->child, "win_menu", (t_gui_coord){0, 0, 0}, \
		(t_gui_coord){WIN_WIDTH, WIN_HEIGHT, 0});
	ft_gui_elem_set_color(win->child, 0x000000);
	ft_gui_elem_set_grid(win->child, (t_gui_coord){10, 10, 0}, 10);
	ft_gui_elem_set_parent(head, win->child);
	ft_main_gui_init_win_menu(win->child);
	ft_gui_elem_init(&win->child, "win_author", (t_gui_coord){0, 0, 0}, \
		(t_gui_coord){WIN_WIDTH, WIN_HEIGHT, 0});
	ft_gui_elem_set_color(win->child, 0x000000);
	ft_gui_elem_set_grid(win->child, (t_gui_coord){10, 10, 0}, 10);
	ft_gui_elem_set_parent(head, win->child);
	ft_gui_elem_set_status(win->child, GUI_ELEM_HIDDEN);
	ft_main_gui_init_win_author(win->child);
}

void	ft_main_gui_init_win_2(t_list *head)
{
	t_gui_elem	*win;

	win = head->content;
	ft_gui_elem_init(&win->child, "win_me", (t_gui_coord){0, 0, 0}, \
		(t_gui_coord){WIN_WIDTH, WIN_HEIGHT, 0});
	ft_gui_elem_set_grid(win->child, (t_gui_coord){4, 1, 0}, 0);
	ft_gui_elem_set_color(win->child, 0x000000);
	ft_gui_elem_set_parent(head, win->child);
	ft_gui_elem_set_status(win->child, GUI_ELEM_HIDDEN);
	ft_gui_elem_init(&win->child, "win_render", (t_gui_coord){0, 0, 0}, \
		(t_gui_coord){WIN_WIDTH, WIN_HEIGHT, 0});
	ft_gui_elem_set_color(win->child, 0x000000);
	ft_gui_elem_set_parent(head, win->child);
	ft_gui_elem_set_status(win->child, GUI_ELEM_HIDDEN);
	ft_gui_elem_set_redraw(win->child, ft_render_redraw);
}

void	ft_main_gui_init_win(t_list *head)
{
	t_gui_elem	*win;

	win = head->content;
	ft_main_gui_init_win_1(head);
	ft_main_gui_init_win_2(head);
}

void	ft_main_gui_init(t_wolf3d *w)
{
	w->gui.redraw = 0;
	w->gui.redraw_elem = NULL;
	w->gui.search_elem = GUI_EVENT_OFF;
	w->gui.dom = NULL;
	w->gui.fonts = NULL;
	w->gui.mode = GUI_MD_MENU;
	ft_gui_elem_init(&w->gui.dom, "win", (t_gui_coord){0, 0, 0}, \
		(t_gui_coord){WIN_WIDTH, WIN_HEIGHT, 0});
	ft_gui_elem_set_color(w->gui.dom, 0x000000);
	ft_main_gui_init_win(w->gui.dom);
}
