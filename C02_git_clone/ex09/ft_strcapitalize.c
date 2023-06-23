/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 02:59:39 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/18 04:29:23 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	x;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		x = str[i];
		if (j == 1 && x >= 'a' && x <= 'z')
			str[i] -= 32;
		else if (j == 0 && x >= 'A' && x <= 'Z')
			str[i] += 32;
		if (x < '0' || (x > '9' && x < 'A') || (x > 'Z' && x < 'a') || x > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char text[] = "Rve!05 Kz~uc|#Iyn/wr-9(Vcsfkukjw3)~q";
	ft_strcapitalize(text);
	return (0);
}*/