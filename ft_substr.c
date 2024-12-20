/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:53:39 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/19 13:03:37 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char			*new;
	unsigned int	i;

	i = 0;
	if (start >= ((unsigned int)ft_strlen(s)))
		len = 0;
	else if (len > ((unsigned int)ft_strlen(s + start)))
		len = ft_strlen(s + start);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len && start + i < ((unsigned int)ft_strlen(s)))
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
