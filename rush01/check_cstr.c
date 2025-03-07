/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu irmarqui minseoki <marvin@42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:33:38 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/02 14:44:41 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_col_up(int grid[4][4], int col, int expected)
{
	int	i;
	int	visible;
	int	max_height;

	i = 0;
	visible = 0;
	max_height = 0;
	while (i < 4)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			visible++;
		}
		i++;
	}
	return (visible == expected);
}

int	check_col_down(int grid[4][4], int col, int expected)
{
	int	i;
	int	visible;
	int	max_height;

	i = 3;
	visible = 0;
	max_height = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			visible++;
		}
		i--;
	}
	return (visible == expected);
}

int	check_row_left(int grid[4][4], int row, int expected)
{
	int	i;
	int	visible;
	int	max_height;

	i = 0;
	visible = 0;
	max_height = 0;
	while (i < 4)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			visible++;
		}
		i++;
	}
	return (visible == expected);
}

int	check_row_right(int grid[4][4], int row, int expected)
{
	int	i;
	int	visible;
	int	max_height;

	i = 3;
	visible = 0;
	max_height = 0;
	while (i >= 0)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			visible++;
		}
		i--;
	}
	return (visible == expected);
}

int	check_all_constraints(int grid[4][4], int constraints[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_col_up(grid, i, constraints[i]))
			return (0);
		if (!check_col_down(grid, i, constraints[i + 4]))
			return (0);
		if (!check_row_left(grid, i, constraints[i + 8]))
			return (0);
		if (!check_row_right(grid, i, constraints[i + 12]))
			return (0);
		i++;
	}
	return (1);
}
