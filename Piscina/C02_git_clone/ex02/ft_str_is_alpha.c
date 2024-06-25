/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 02:05:49 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/16 06:19:21 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	bo;

	i = 0;
	bo = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			bo = 1;
		else
		{
			bo = 0;
			return (bo);
		}
		str++;
	}
	return (bo);
}
/*
int main()
{
    int i;
    char *text = " A";

    i = ft_str_is_alpha(text);

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
