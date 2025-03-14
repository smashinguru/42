/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:05:06 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 18:05:09 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write (1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if ((i % 3 == 0) && (i % 5 != 0))
            write(1, "fizz", 4);
        else if ((i % 5 == 0) && (i % 3 != 0))
            write(1, "buzz", 4);
        else if ((i % 5 == 0) && (i % 3 == 0))
            write(1, "fizzbuzz", 8);
        else
        {
            ft_putnbr(i);
        }
        write(1, "\n", 1);
        i++;
    }
    return(0);
}
