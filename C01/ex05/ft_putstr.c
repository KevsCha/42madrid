/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:10:16 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/10 12:49:31 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, &(*str++), 1);
}
/*
int	main(void)
{
	char *str;
	str = "hola";
	ft_putstr(str);
	return (0);
}
*/
