/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:29:53 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/03 16:27:55 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>*/
/*#include <stdio.h>*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
/*int	main(void)
{
	int	c;

	c = '[';
	printf("my function : %d", ft_isalnum(c));
	printf("c function : %d", isalnum(c));
}*/
