/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:06:37 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/19 13:07:08 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*transformed_string;

	i = 0;
	transformed_string = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!transformed_string)
		return (NULL);
	while (s[i])
	{
		transformed_string[i] = (*f)(i, s[i]);
		i++;
	}
	transformed_string[i] = '\0';
	return (transformed_string);
}
