/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorange- <dorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:31:00 by dorange-          #+#    #+#             */
/*   Updated: 2020/03/05 16:24:05 by dorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

/*
** **************************************************************************
**	void ft_main(int c, char **v)
**
**	General programm function.
** **************************************************************************
*/

void	ft_main(int c, char **v)
{
	t_wolf3d	w;

	(void)v;
	if (c > 2)
		ft_error("WRONG arguments");
	ft_unpack();
	w.sdl = sdl_init(w.sdl);
	ft_gui_init(&w);
	ft_main_gui_init(&w);
	ft_gui_redraw(&w);
	while (w.sdl->running)
		ft_main_events(&w);
	ft_clean_sdl(&w);
	ft_check_folders();
}

int		main(int c, char **v)
{
	ft_main(c, v);
	return (0);
}
