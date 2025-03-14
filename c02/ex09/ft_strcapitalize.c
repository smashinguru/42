/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:50:43 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/08 19:56:22 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	initial;

	i = 0;
	initial = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			if (initial && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			initial = 0;
		}
		else
			initial = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str2[] = "HELLO WORLD! 123ABc";
	printf("%s\n", ft_strcapitalize(str2));
	char str3[] = "cOdInG Is fUn!";
	printf("%s\n", ft_strcapitalize(str3));
	return (0);
}*/
