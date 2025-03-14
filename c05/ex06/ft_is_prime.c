/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:16:03 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/10 14:16:13 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	div;

	i = 1;
	div = 0;
	if (nb <= 1)
		return (0);
	else
	{
		while (i <= nb)
		{
			if (nb % i == 0)
				div++;
			i++;
		}
	}
	if (div > 2)
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n" , ft_is_prime(7));
	printf("%d\n" , ft_is_prime(0));
	printf("%d\n" , ft_is_prime(1));
	printf("%d\n" , ft_is_prime(6));
	return(0);
}*/