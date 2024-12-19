#include <stdio.h>
#include <stdlib.h>

static size_t count_words(const char *s, char c)
{
    size_t count = 0;
    while (*s)
    {
        while (*s == c)
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

static char *copy_word(const char *s, size_t start, size_t end)
{
    char *word = malloc(end - start + 1);
    size_t i = 0;

    if (!word)
        return NULL;
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return word;
}

static void free_all(char **arr, size_t j)
{
    while (j > 0)
        free(arr[--j]);
    free(arr);
}

char **ft_split(const char *s, char c)
{
    char **new;
    size_t i;
    size_t j;
    size_t start;

    if (!*s)
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

int main(void)
{
    char *s = ",a,b,c,dskd,";
    char c = ',';
    char **result = ft_split(s, c);
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
    return 0;
}
