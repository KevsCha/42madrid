/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:03:03 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/11 02:03:08 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy (char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i]; 
        i++;
    }
    dest[i++] = '\0';
    return (dest);
}
/*
int main (void)
{
    char *destino;
    char *copiar = "hola que hace";
    ft_strncpy( destino, copiar);
    return (0);
}
*/