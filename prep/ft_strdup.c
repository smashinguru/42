/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:27:42 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 20:27:45 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strdup(char *src)
{
    char *dest;
    int i;
    int len;

    len = 0;
    while (src[len])
        len++;
    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
