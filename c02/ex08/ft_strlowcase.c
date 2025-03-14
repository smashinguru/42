/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:33:58 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/07 13:46:14 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
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
	char str5[] = "already LOWERCASE";

	ft_putstr(ft_strlowcase(str1));
	ft_putstr(ft_strlowcase(str2));
	ft_putstr(ft_strlowcase(str3));
	ft_putstr(ft_strlowcase(str4));
	ft_putstr(ft_strlowcase(str5));

	return (0);
}*/	
