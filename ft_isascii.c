/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:01:33 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/03 17:22:34 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		if (c == i)
		{
			return (1);
		}
		else
			i++;
	}
	return (0);
}
