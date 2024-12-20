/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:05:45 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/03 17:26:15 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	i;

	i = 32;
	while (i < 127)
	{
		if (c == i)
			return (1);
		else
			i++;
	}
	return (0);
}
