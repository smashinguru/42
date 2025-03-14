/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:56:00 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 16:56:02 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
           write (1, &str[i], 1);
           i++;
    }
}

char    *rot_13(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'm') || ((str[i] >= 'A' && str[i] <= 'M')))
            str[i] = str[i] + 13;
        else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z') )
          str[i] = str[i] - 13;
        i++;
    }
    return(str);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else 
    {
        ft_putstr(rot_13(argv[1]));
        write(1, "\n",1);
    }
    return (0);
}
