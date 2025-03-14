/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:21:06 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/09 22:21:10 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	if (power == 1)
		return (nb);
	return (1);
}

/*
#include <stdio.h>
int     main(void)
{
		printf("%d\n" , ft_recursive_power(4,-2));
		printf("%d\n" , ft_recursive_power(2,4));
		printf("%d\n" , ft_recursive_power(0,0));
		printf("%d\n" , ft_recursive_power(0,2));
		printf("%d\n" , ft_recursive_power(0,-2));
		return(0);
}*/