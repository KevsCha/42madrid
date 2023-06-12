/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 06:49:28 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/12 06:49:31 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while(i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i + 1] = '\0';
    i = 0;
    while (dest[i] != '\0')
    {
        printf("%c",dest[i]);
        i++;
    }
    return (i);
}
int main(void)
{
    char dest;
    char text [] = "hola soy un texto";
    int i = 10;
    i = ft_strlcpy(&dest[10], text, i);
    //printf("%d", i);
    return (0);
}
