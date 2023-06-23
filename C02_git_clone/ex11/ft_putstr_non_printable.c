/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:33:40 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/17 20:44:51 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(unsigned char *str)
{
	char	*hexa;
	int		i;
	int		aux;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
		{
			ft_putchar('\\');
			aux = str[i] / 16;
			ft_putchar(hexa[aux]);
			aux = str[i] % 16;
			ft_putchar(hexa[aux]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*
int main(void)
{
	unsigned	char text[] = "^BM-^CM-^DM-^EM-^FM-^GM-^HM-^IM-^JM-^KM-^LM-^MM";
	ft_putstr_non_printable(text);
	return (0);
}
*/
