/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:33:58 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/07 13:42:12 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "Hello42";
	char str3[] = "123abcXYZ";
	char str4[] = "";
	char str5[] = "already UPPERCASE";

	ft_putstr(ft_strupcase(str1));
	ft_putstr(ft_strupcase(str2));
	ft_putstr(ft_strupcase(str3));
	ft_putstr(ft_strupcase(str4));
	ft_putstr(ft_strupcase(str5));

	return (0);
}*/	
