/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_events.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorange- <dorange-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:51:11 by dorange-          #+#    #+#             */
/*   Updated: 2020/03/05 16:22:07 by dorange-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

void	ft_main_events(t_wolf3d *w)
{
	if (w->gui.mode == GUI_MD_GAME)
		ft_gui_redraw(w);
	else
		ft_gui_events(w);
}
