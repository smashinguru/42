/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:13:29 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 16:13:32 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *search_and_replace(char *str, char a, char b)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == a)
            str[i] = b;
        i++;
    }
    return(str);
}

int main(int argc, char **argv)
{
    char *res;

    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }
    if (argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        write(1, "\n", 1);
        return (0);
    }
    else
    {
        res = search_and_replace(argv[1], argv[2][0], argv[3][0]);
        write (1, res, ft_strlen(argv[1]));
        write (1, "\n", 1);
    }
    return (0);
}

