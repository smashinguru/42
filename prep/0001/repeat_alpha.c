/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:46:49 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 14:46:52 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    repeat_alpha(char c)
{
    int i;

    i = 0;
    if (c >= 'a' && c <= 'z')
        i = c - 'a' + 1;
    else if (c >= 'A' && c <= 'Z')
        i = c - 'A' + 1;
    else
        i = 1;
    while (i--)
    {
        write(1, &c, 1);
    }
}



int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] != '\0')
    {
        repeat_alpha(argv[1][i]);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
