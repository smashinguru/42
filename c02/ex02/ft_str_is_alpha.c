/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:24:18 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/08 19:27:28 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	if (str[i] == ('\0'))
		return (1);
	while (str[i])
	{
		alpha = ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'));
		if (!alpha)
			return (0);
		i++;
	}
	return (1);
}
/*
void    ft_putnbr(int n)
{
        char c;

        c = n + '0';
        write(1, &c, 1);
        write(1, "\n", 1);
}

int     main(void)
{
        ft_putnbr(ft_str_is_alpha("Hello"));
        ft_putnbr(ft_str_is_alpha("Hello42"));
        ft_putnbr(ft_str_is_alpha(""));
        return (0);
}*/
