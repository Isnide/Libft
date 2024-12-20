/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisciane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:12:50 by nisciane          #+#    #+#             */
/*   Updated: 2024/12/19 15:30:49 by nisciane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

static int	count(const char *str, char del)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*str)
	{
		if (*str != del && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == del)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static char	*get_next_substr(const char **s, char c)
{
	const char	*start;
	size_t		len;
	char		*res;
	size_t		i;

	while (**s && **s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = start[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	array = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			array[i] = get_next_substr(&s, c);
			if (!array[i])
				return (free_all(array, i - 1), NULL);
			i++;
		}
		else
			s++;
	}
	array[i] = NULL;
	return (array);
}
// int main(void)
//free_all(array, i - 1), 
// {
//     char *s = ",a,b,c,dskd,";
//     char c = ',';
//     char **result = ft_split(s, c);
//     for (int i = 0; result[i] != NULL; i++)
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//     }
//     free(result);
//     return 0;
// }
