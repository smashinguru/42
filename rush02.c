/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu, aabouyaz, rkonate                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:07:12 by ruliu             #+#    #+#             */
/*   Updated: 2025/02/23 20:03:43 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	drawline(int length, char first, char mid, char last)
{
	int	i;

	if (length > 0)
		ft_putchar(first);
	i = 0;
	while (i < length - 2)
	{
		ft_putchar(mid);
		i = i + 1;
	}
	if (length > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (y > 0)
		drawline(x, 'A', 'B', 'A');
	i = 0;
	while (i < y - 2)
	{
		drawline(x, 'B', ' ', 'B');
		i = i + 1;
	}
	if (y > 1)
		drawline(x, 'C', 'B', 'C');
}
