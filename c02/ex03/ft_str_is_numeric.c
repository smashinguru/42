/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:24:18 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/07 13:11:46 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == ('\0'))
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	ft_putnbr(ft_str_is_numeric("42"));
	ft_putnbr(ft_str_is_numeric("Hello42"));
	ft_putnbr(ft_str_is_numeric(""));
        return (0);
}*/
