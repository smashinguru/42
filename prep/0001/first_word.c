/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:29:35 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/13 17:29:37 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *first_word(char *str)
{
    int i;
    int j;
    char *word;

    i = 0;
    j = 0;
    word = str;
    while (str[i] == ' '|| str[i] == '\t')
            i++;
    word[j] = str[i];
    while(str[i] && str[i] != ' ' && str[i] != '\t')
    {   
        word[j] = str[i];
        write(1, &word[j], 1); 
        j++;
        i++;

    }
    return (word);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    } 
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        first_word(argv[1]);
        write(1, "\n", 1);
    }
    return(0);
}