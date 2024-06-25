/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 04:58:22 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/22 04:58:23 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(unsigned int nb)
{
	unsigned int	i;

	if (nb > 2147483647)
		return (0);
	if (nb == 1)
		return (1);
	if (nb % 2 == 0)
		i = 0;
	if (nb % 2 == 1)
		i = 1;
	while (i < nb / 2)
	{
		if (i * i == nb)
			return (i);
		i += 2;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(-9));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(6));
	printf("%d\n", ft_sqrt(7));
	printf("%d\n", ft_sqrt(8));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(2147483648));
	return (0);
}
*/