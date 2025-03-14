/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:22:54 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/09 21:49:53 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = nb;
	if (power == 0)
		res = 1;
	if (power < 0)
		res = 0;
	if (power == 1)
		res = nb;
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d\n" , ft_iterative_power(4,-2));
        printf("%d\n" , ft_iterative_power(2,4));
        printf("%d\n" , ft_iterative_power(0,0));
		printf("%d\n" , ft_iterative_power(5,0));
		printf("%d\n" , ft_iterative_power(0,2));
		printf("%d\n" , ft_iterative_power(0,-2));
		printf("%d\n" , ft_iterative_power(19,1));
        return(0);
}*/
