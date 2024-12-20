/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:38:33 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/17 18:53:00 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	csrc = (char *)src;
	cdest = (char *)dest;
	if (dest < src)
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	else if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}

/*int	main(void)
{
	char* src_test = NULL;
	char* dest_test = NULL;

	//ft_memmove(dest_test, src_test, 1);
	//printf("my function : %s\n", dest_test);
	memmove(dest_test, src_test, 1);
	printf("c function : %s", dest_test);
}*/
