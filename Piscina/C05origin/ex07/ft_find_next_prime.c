/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:27:33 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/22 12:27:35 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb > 2147483647)
		return (0);
	if (nb < 2)
		return (2);
	while (i >= 2 && (nb % i != 0))
		i--;
	if (i == 1)
		return (nb);
	else
	{
		while (i >= 2)
		{
			nb++;
			i = nb - 1;
			while (i >= 2 && nb % i != 0)
				i--;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	printf("es primo:3 => %d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("es primo:5 => %d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(6));
	printf("es primo:7 => %d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(10));
	printf("es primo:11 => %d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(12));
	printf("es primo:13 => %d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(16));
	printf("es primo:17 => %d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(18));
	printf("es primo:19 => %d\n", ft_find_next_prime(19));

	return (0);
}
*/