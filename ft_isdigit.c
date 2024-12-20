/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:16:40 by nisciane          #+#    #+#             */
/*   Updated: 2024/11/12 16:01:05 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		if (c == i)
			return (2048);
		else
			i++;
	}
	return (0);
}

/*int	main()
{
	int	c;
	c = 'q';
	printf("%d", isdigit(c));
}*/
