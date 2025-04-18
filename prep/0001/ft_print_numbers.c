/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:24:23 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 14:24:25 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char c;

    c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_numbers();
    return (0);
}