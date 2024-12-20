/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:24:51 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/03 17:49:02 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_tolower(int c)
{
	if (c >= 65 && c < 91)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
/*int	main(void)
{
	int	c;
	int	A;

	A = 'A';
	c = 'c';
	printf("%d", ft_tolower(c));
	printf("%d", ft_tolower(A));
}
*/
