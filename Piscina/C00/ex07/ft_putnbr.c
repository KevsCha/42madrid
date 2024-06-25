/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:38:25 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/07 02:51:34 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	exponente(int y)
{
	int	i;

	i = 0;
	while (y != 0)
	{
		y = y / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int a)
{
	int	x;
	int	i;
	int dig;

	x = 1;
	if (a < 0)
	{
		ft_putchar('-');
		a = -(a);
	}
	i = exponente(a);
	while (i > 1)
	{
		x = x * 10;
		i--;
	}
	while (x != 0)
	{
		dig = ((a / x) % 10) + '0';
		write(1, &dig, 1);
		x /= 10;
	}
}

int	main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}

