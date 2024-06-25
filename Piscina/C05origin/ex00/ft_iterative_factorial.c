/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:40:32 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/20 17:40:34 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	i;

	i = 0;
	x = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		x = x * nb;
		nb--;
	}
	return (x);
}
/*
int	main(void)
{
	ft_iterative_factorial(0);
	return (0);
}*/