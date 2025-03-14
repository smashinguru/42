/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 02:58:18 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/09 20:28:39 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <unistd.h>
void	ft_putstr(char	*str)
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
	char	dest[20] = "abcde";
	char	*src = "ABCDE";
	int	nb = 3;

	ft_strncat(dest, src, nb);
	ft_putstr(dest);

	return(0);
}*/
