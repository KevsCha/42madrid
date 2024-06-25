/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:26:21 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/16 06:22:27 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	i;
	int	bo;

	i = 0;
	bo = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == 0)
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
    char *text = "789456d135";

    i = ft_str_is_alpha(text);

    if(i == 1)
    {
        printf("el string solo contiene caracteres numericos %d\n", i);
    }else if (i == 0)
    {
        printf("el string contiene caracteres distintos a numeros %d\n", i);
    }
    
    return (0);
}
*/
