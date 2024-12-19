
#include <stdio.h>
#include <stdlib.h>

static	size_t count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static	char *word_copy(const char *s, size_t start, size_t end)
{
	char *word;
	size_t i;

	word = (char *)malloc(end - start + 1);
	i = 0;
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;
	
	i = 0;
	j = 0;
	start = 0;
	end = 0;
	new = malloc((count(s, c) + 1) * sizeof(char *));
	if (!s || !new)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while ( s[i] != c)
			i++;
		if (i < start)
		{
			new[j] = word_copy(s, start, i);
			if (!new[j])
			{
				while (j < 0)
					free(new[--j]);
				free(new);
				return (NULL);
			}
			j++;
		}
	}
	new[j] = NULL;
	return (new);
}

int	main(void)
{
	char *test;
	char	c;
	c = ",";
	test = "a,b,c,d";

	printf("%ls", ft_split(test, c));

}
