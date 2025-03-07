/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu irmarqui minseoki <marvin@42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:13:40 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/02 14:14:23 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	solve(int grid[4][4], int constraints[16], int pos)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (check_all_constraints(grid, constraints));
	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (is_valid(grid, row, col, val))
		{
			grid[row][col] = val;
			if (solve(grid, constraints, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}
