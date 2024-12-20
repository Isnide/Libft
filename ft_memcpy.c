/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:33:33 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/18 20:25:38 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	csrc = (char *)src;
	cdest = (char *)dest;
	if ((cdest != NULL) || (csrc != NULL))
	{
		while (n)
		{
			*(cdest++) = *(csrc++);
			n--;
		}
	}
	return (dest);
}
