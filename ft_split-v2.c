char **ft_split(const char *s, char c)
{
    char **new;
    size_t i;
    size_t j;
    size_t start;

    if (!s)
        return NULL;
    new = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!new)
        return NULL;
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start && !(new[j++] = copy_word(s, start, i)))
            return free_all(new, j - 1), NULL;
    }
    new[j] = NULL;
    return new;
}
