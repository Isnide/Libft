/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:29:31 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/17 18:51:55 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	character;
	int		i;

	character = (char)c;
	i = 0;
	while (s[i] && s[i] != character)
		i++;
	if (s[i] == character)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char *test;
	int	c;
	test = "bonjour";
	c = 110;
	printf("%s", ft_strchr(test, c));
}*/
