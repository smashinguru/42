/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:27:21 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 14:27:32 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] != '\0')
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    return (0);
}
