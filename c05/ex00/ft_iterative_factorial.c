/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 22:17:04 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/08 22:25:20 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	i;
	int	fac;

	i = 1;
	fac = 1;
	if (nb < 0)
		fac = 0;
	else if (nb == 0)
		fac = 1;
	else
	{
		while (i <= nb)
		{
			fac = fac * i;
			i++;
		}
	}
	return (fac);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n" , ft_iterative_factorial(4));
	printf("%d\n" , ft_iterative_factorial(0));
	printf("%d\n" , ft_iterative_factorial(-10));
	return(0);
}*/
