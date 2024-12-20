/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:28:12 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/18 20:33:52 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	length_of(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	num;

	num = n;
	len = length_of(n);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	else if (num == 0)
	{
		res[0] = '0';
	}
	res[len] = '\0';
	while (num != 0)
	{
		res[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
