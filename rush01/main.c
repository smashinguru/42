/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu irmarqui minseoki <marvin@42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:21:30 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/02 15:23:44 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	constraints[16];

	grid_gen(grid);
	if (argc != 2 || !read_str(argv[1], constraints))
	{
		print_error();
		return (1);
	}
	if (!solve(grid, constraints, 0))
	{
		print_error();
		return (1);
	}
	print_grid(grid);
	return (0);
}
