/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 01:44:21 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/16 05:57:07 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	x;
	int	a;

	s = 1;
	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		a = str[i - 1];
		if (str[i] == '-')
			s = s * -1;
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			return (x * s);
		if ((a >= '0' && a <= '9') && (str[i] < '0' || str[i] > '9'))
			return (x * s);
		if (str[i] >= 48 && str[i] <= 57)
			x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * s);
}
/*
int	main(void)
{
	char	*numb_text;

	numb_text = " ---+--+1234ab567";
	printf("%d", ft_atoi(numb_text));
	// ft_atoi(numb_text);
	return (0);
}
*/