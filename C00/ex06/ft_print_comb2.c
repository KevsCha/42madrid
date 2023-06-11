/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:44:51 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/06 12:33:47 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + '0', x % 10 + '0');
			write(1, " ", 1);
			ft_putchar(y / 10 + '0', y % 10 + '0');
			if (x != 98 || y != 99)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/