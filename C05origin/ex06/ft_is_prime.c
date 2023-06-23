/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 05:39:40 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/22 05:39:41 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (i < nb && nb % i == 0)
			return (0);
		if (i == nb && nb % i == 0)
			return (1);
		i++;
	}
	return (3);
}
/*
int	main(void)
{
	printf("es primo:3 => %d\n",ft_is_prime(3));
	printf("%d\n",ft_is_prime(4));
	printf("es primo:5 => %d\n",ft_is_prime(5));
	printf("%d\n",ft_is_prime(6));
	printf("es primo:7 => %d\n",ft_is_prime(7));
	printf("%d\n",ft_is_prime(8));
	printf("%d\n",ft_is_prime(9));
	printf("%d\n",ft_is_prime(10));
	printf("es primo:11 => %d\n",ft_is_prime(11));
	printf("%d\n",ft_is_prime(12));
	printf("es primo:13 => %d\n",ft_is_prime(13));
	printf("%d\n",ft_is_prime(14));
	printf("%d\n",ft_is_prime(15));
	printf("%d\n",ft_is_prime(16));
	printf("es primo:17 => %d\n",ft_is_prime(17));
	printf("%d\n",ft_is_prime(18));
	printf("es primo:19 => %d\n",ft_is_prime(19));
	printf("%d\n",ft_is_prime(20));
	printf("%d\n",ft_is_prime(21));
	printf("%d\n",ft_is_prime(22));
	printf("es primo:23 => %d\n",ft_is_prime(23));
	printf("%d\n",ft_is_prime(24));
	printf("%d\n",ft_is_prime(25));
	printf("%d\n",ft_is_prime(26));
	printf("%d\n",ft_is_prime(27));
	printf("%d\n",ft_is_prime(28));
	printf("es primo:29 =>%d\n",ft_is_prime(29));
	printf("%d\n",ft_is_prime(30));
	return (0);
}*/