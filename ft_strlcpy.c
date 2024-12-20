/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:08:47 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/03 17:44:54 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	while (i + 1 < siz && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < siz)
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int	main(void)
{
	char dst_test[] = "hello";
	char src_test[] = "bo";
	printf("%zu", ft_strlcpy(dst_test, src_test, 4));
}*/
