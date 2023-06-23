/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:08:25 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/20 16:08:26 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	while (j < argc - 1)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
			write(1, &(argv[argc - 1][i++]), 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
