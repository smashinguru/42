/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 00:10:06 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/14 00:10:07 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_double(char *str, char c, int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void    inter(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    while(str1[i] != '\0')
    {
        j = 0;
        while(str2[j] != '\0')
        {
            if(str1[i] == str2[j] && check_double(str1, str1[i], i))
            {
                write(1, &str1[i], 1);
                break;
            }
            else 
                j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
        write(1, "\n", 1);
    else 
    {
        inter(argv[1],argv[2]);
        write(1, "\n", 1);
    }
    return (0);
}
