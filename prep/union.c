/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 00:54:30 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/14 00:55:01 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int check_double(char *str, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return(0);
        i++;
    }
    return(1);
}

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

char *ft_union(char *s1, char *s2)
{
    int i;
    int j;
    char *res;

    res = malloc(sizeof(char) * (ft_strlen(s1)+ ft_strlen(s2)+ 1));
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        if (check_double(res, s1[i], j))
        {
            res[j] = s1[i];
            j++;
        }
    i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        if (check_double(res, s2[i], j))
        {
            res[j] = s2[i];
            j++;
        }
    i++;
    }
    return (res);
}

int main(int argc, char **argv)
{
    int i;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    else
        ft_union(argv[1], argv[2]);
    i = 0;
    while (ft_union(argv[1], argv[2])[i] != '\0')
    {
        write (1, &ft_union(argv[1], argv[2])[i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}
