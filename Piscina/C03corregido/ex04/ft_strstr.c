/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:19:15 by kquispe           #+#    #+#             */
/*   Updated: 2023/06/18 11:38:53 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && (str[i] == to_find[i]))
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
/*/
int main()
{
    char *text = "el voley me enc";
    char *search = "voley";

    ft_strstr(text, search);
    return (0);
}
*/
