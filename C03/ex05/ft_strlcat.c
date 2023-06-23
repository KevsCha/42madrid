/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 06:12:41 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/14 19:30:07 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				j;
	unsigned int	k;
	unsigned int	i;

	i = 0;
	j = 0;
	k = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (dest[k])
		k++;
	if (size <= k)
		return (size + j);
	i = 0;
	while (size && (--size - k) && src[i])
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (j + k);
}

int	main(void)
{
	char	text1[30]= "quiero";
	char	text2[35]= "cdadasdasd";

	printf("%d\n",ft_strlcat(text1, text2, 30));
	printf("%lu",strlcat(text1, text2, 30));
	return (0);
}
