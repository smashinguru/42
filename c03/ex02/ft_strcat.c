/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:46:17 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/09 20:22:44 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <unistd.h>
void	ft_putchar(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, str++, 1);
	}
}

int	main(void)
{
	char	dest[20] = "ABC";
	char	*src = "abc";

	ft_strcat(dest, src);
	ft_putchar(dest);
	write(1, "\n", 1);
	return (0);
}*/
