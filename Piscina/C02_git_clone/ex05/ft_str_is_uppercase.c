/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 06:24:43 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/16 06:26:40 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;
	int	bo;

	i = 0;
	bo = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] == 0))
			bo = 1;
		else
		{
			bo = 0;
			return (bo);
		}
		i++;
	}
	return (bo);
}
/*
int main()
{
    int i;
    char *text = "";

    i = ft_str_is_uppercase(text);

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
