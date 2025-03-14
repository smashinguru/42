/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:30:53 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/10 17:30:55 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str++, 1);
	}
}

void	ft_swap(char **arg1, char **arg2)
{
	char	*temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int	ft_strcmp(char *arg1, char *arg2)
{
	while (*arg1 && (*arg1 == *arg2))
	{
		arg1++;
		arg2++;
	}
	return ((unsigned char)*arg1 - (unsigned char)*arg2);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1]) > 0))
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
