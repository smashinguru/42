/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:15:36 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 14:15:37 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    char c;

    c = '9';
    while (c >= '0')
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1);
    return (0);
}

