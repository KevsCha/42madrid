/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:24:26 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/11 02:24:32 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i;
    int bo;

    i = 0;
    bo = 1;
    if(*str == '\0')
        return (bo);
    while(str[i] != '\0')
    {
        if((*str < 32 || str[i] > 126))
            return (bo = 0);
        i++;
        
    }
    return (bo);
}
/*
int main()
{
    int i;
    char *text = "∞¬";

    i = ft_str_is_printable(text);

    if(i == 1)
    {
        printf("el texto tiene caracteres de tipo string %d\n", i);
    }else if (i == 0)
    {
        printf("el texto contiene otros caracteres %d\n", i);
    }
    
    return (0);
}
*/
