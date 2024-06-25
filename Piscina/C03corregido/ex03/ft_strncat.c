/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 00:12:45 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/18 11:34:49 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
		i++;
	while (k < nb && src[k] != '\0')
	{
		dest[j + k] = src[k];
		i++;
		k++;
	}
	dest[j + k] = '\0';
	return (dest);
}

int main(void)
{
    char text1[20] = "scooby doo";
    char text2[] = " papa y el pum pum pum";

    ft_strncat(text1, text2 , 13);
    return (0);
}
//se me olvido poner el nulo PENDEJO!!
//devuelve el valor total de habe concatenado todo el string 2 a 1 