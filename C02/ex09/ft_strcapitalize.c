/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 02:59:39 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/12 06:49:08 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
    int i; 
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            if(str[0] >= 'a' && str[0] <= 'z')
                str[0] = str[0] - 32;
            if(i != 0 && (str[i - 1] != ' ' && str[i - 1] != '+' && str[i - 1] != '-'))
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                   str[i] = str[i] + 32;
            }
            if(str[i] == ' ' || str[i] == '-' || str[i] == '+')
            {
                if(str[i + 1] >= 'a' && str[i + 1] <= 'z')
                {
                    str[i + 1] = str[i + 1] - 32;
                }      
            }
        }
        i++;
    }
    return (str);
}
/*
int main()
{
    char text [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char *mayus = ft_strcapitalize(text);
}
*/
