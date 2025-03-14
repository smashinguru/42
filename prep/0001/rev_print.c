/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:58:07 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 18:58:09 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strlen(char *str)
{
    int k;

    k = 0;
    while (str[k] != '\0')
        k++;
    return k;
}

char *rev_print(char *str)
{
    int len;

    len = ft_strlen(str);
    while(len > 0) 
    {
        write (1,&str[len - 1], 1);
        len --;
    }
    return (str);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write (1, "\n", 1);
    else
    {
        rev_print(argv[1]);
        write (1, "\n", 1);
    }
    return (0);
}
