/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:35:18 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/18 20:39:04 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*r;
	unsigned char	find;

	r = (unsigned char *)s;
	find = (unsigned char)c;
	while (n--)
	{
		if (*r != find)
			r++;
		else
			return ((void *)r);
	}
	return (NULL);
}
