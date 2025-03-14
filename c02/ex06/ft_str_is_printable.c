/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:48:18 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/08 19:48:24 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == ('\0'))
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	ft_putnbr(ft_str_is_printable("42"));
	ft_putnbr(ft_str_is_printable("Hello42"));
	ft_putnbr(ft_str_is_printable(""));
	ft_putnbr(ft_str_is_printable("ABC"));
	ft_putnbr(ft_str_is_printable("Abc"));
	ft_putnbr(ft_str_is_printable("abc"));
        return (0);
}*/
