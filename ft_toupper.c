/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:23:15 by nisciane          #+#    #+#             */
/*   Updated: 2024/11/21 16:46:25 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main(void)
{
	int	c;
	int	a;
	c = 'Q';
	//a = 'a';
	printf("%d", ft_toupper(c));
	printf("%d", toupper(c));
	//printf("%d", ft_toupper(a));
}*/
