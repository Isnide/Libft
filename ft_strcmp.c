#include <stddef.h>

int	ft_strncpm(const char *s1, const char *s2, size_t)
{
	while (n > 0)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;

	}
	return 0;
}
