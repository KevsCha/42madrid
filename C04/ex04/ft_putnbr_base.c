/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 05:58:18 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/16 14:27:21 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	neg(int j, int nbr, int save[16], int i)
{
	save[j] = nbr % i;
	nbr = nbr / i;
	nbr = -nbr;
	return (nbr);
}

void	nbr0(int nbr, int j, char *base)
{
	if (nbr == 0 && j == 0)
		ft_putchar(base[0]);
}

int	func(int i, char *base, int nbr)
{
	int	j;
	int	save[100];

	j = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			nbr = neg(j, nbr, save, i);
			j++;
		}
		else
			nbr = -nbr;
	}
	while (nbr > 0)
	{
		save[j] = nbr % i;
		nbr = nbr / i;
		j++;
	}
	nbr0(nbr, j, base);
	while (j > 0)
		ft_putchar(base[save[--j]]);
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	r;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
		j = i;
		while (base[j] != '\0')
		{
			if (base[i - 1] == base[j++])
				return ;
			if ((base[i - 1] != 45 && base[i - 1] != 43)
				&& (base[i - 1] >= 32 && base[i - 1] <= 126))
				r = 0;
			else
				return ;
		}
	}
	if (i == 1 || base[0] == '\0')
		return ;
	nbr = func(i, base, nbr);
	while (nbr != 0)
		nbr = func(i, base, nbr);
}
/*
int	main(void)
{
	int numb = 1234;
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(numb, base);
	return (0);
}
*/