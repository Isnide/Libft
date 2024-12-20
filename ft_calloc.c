/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:03:14 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/04 15:36:21 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
// calculate actual memory size in bytes
// allocate memory block
//initialize memory block to zero
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	size_in_bytes;

	size_in_bytes = nmemb * size;
	p = malloc(size_in_bytes);
	if (p != NULL)
	{
		ft_memset(p, 0, size_in_bytes);
	}
	return (p);
}
