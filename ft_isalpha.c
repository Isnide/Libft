/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:50:24 by nisciane          #+#    #+#             */
/*   Updated: 2024/11/12 16:00:00 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>*/
#include <stdio.h>

// check if a char is an alphabet or not 
// if it is an alphabet, return a non-zero int, if not it return 0

int	ft_isalpha(int c)
{
	int	i;

	i = 65;
	while (i < 91)
	{
		if (c == i)
			return (1024);
		else
			i++;
	}
	i = 97;
	while (i < 123)
	{
		if (c == i)
			return (1024);
		else
			i++;
	}
	return (0);
}
/*int	main()
{
	char	c;
	c = '+';
	printf("c function : %d", isalpha(c));
	printf("my function : %d", ft_isalpha(c));
	return (0);
}*/
