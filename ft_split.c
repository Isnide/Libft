static	size_t word_count(char const *s, char c)
{
	size_count = 0;
	while (*s)
	{
		while(*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return count;
}

static char *word_cpy(const char *s, size_t start, size_end)
{
	char *word = (char *)malloc(end - start + 1);
	size_t i = 0;
	if (!word)
		return NULL;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	size_t	i, j, start;
	i, j, start = 0;

	char **result = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	while (s[i]) {
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while(s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j] = word_cpy(s, start, i);
			if (!result[j])
			{
				while (j > 0)
					free(result[--j]);
				free(result);
				return NULL;
			}
			j++;
		}
	}
	result[j] = NULL;
	return result;
}
