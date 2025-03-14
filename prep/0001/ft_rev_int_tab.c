/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 03:38:25 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 03:38:27 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int i;

    i = size - 1;
    while (i >= 0)
    {
        tab[size - 1] = tab[size - i];
        i--;
    }
}

#include <stdio.h>
int main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int i;
        // Print before reversing
    printf("Before: ");
    for (i = 0; i < 5; i++)
        printf("%d ", tab[i]);
    printf("\n");

    // Reverse array
    ft_rev_int_tab(tab, 5);

    // Print after reversing
    printf("After: ");
    for (i = 0; i < 5; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}