/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu <ruliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 01:38:21 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/14 01:38:23 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
    int i = 0;
    int end;

    while (str[i] != '\0') // Find the end of the string
        i++;
    i--; // Move to the last valid character

    while (i >= 0 && (str[i] == ' ' || str[i] == '\t')) // Skip trailing spaces/tabs
        i--;
    end = i; // Mark the end of the last word

    while (i >= 0 && str[i] != ' ' && str[i] != '\t') // Find the start of the last word
        i--;

    write(1, &str[i + 1], end - i); // Print the last word
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    else 
    {
        last_word(argv[1]);
        write(1, "\n", 1);
    }
    return(1);
}
