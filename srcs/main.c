/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicoue <tnicoue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:24:15 by tnicoue           #+#    #+#             */
/*   Updated: 2022/11/18 10:15:33 by tnicoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int ac, char **av)
{
	int		map;
	int		y;
	t_stock	stock;

	y = 0;
	if (ac > 1)
	{
		init_struct(&stock);
		map = openmap(av, &y);
		if (map == -1)
			return (0);
		if (formatmap(map, &stock, y) == -1)
			return (0);
		checkmapdebut(stock.map, &stock);
		valfix(&stock);
		ft_checkopen(&stock);
	}
}

void	init_struct(t_stock *stock)
{
	stock->pathspriten = NULL;
	stock->pathsprites = NULL;
	stock->pathspritew = NULL;
	stock->pathspritee = NULL;
	stock->vmin = 0;
	stock->vmax = 255;
	stock->testfd = 0;
}
