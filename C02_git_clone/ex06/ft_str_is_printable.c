/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:24:26 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/18 04:37:47 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	bo;
	int	i;

	bo = 1;
	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == 9)
			return (0);
		if (str[i] >= 32 && str[i] <= 126)
			bo = 1;
		else
			return (0);
		i++;
	}
	return (bo);
}
/*
int main(void)
{
    int i;
    char *text = " abcdvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    i = ft_str_is_printable(text);
	printf("%d", i);
    return (0);
}*/
