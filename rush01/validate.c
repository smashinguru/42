/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu irmarqui minseoki <marvin@42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:45:13 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/02 14:47:50 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	is_valid(int grid[4][4], int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}
