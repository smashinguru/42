/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:57:45 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/10 13:57:50 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n" , ft_sqrt(49));
	printf("%d\n" , ft_sqrt(7));
	printf("%d\n" , ft_sqrt(-3));
	printf("%d\n" , ft_sqrt(0));
	return(0);
}*/