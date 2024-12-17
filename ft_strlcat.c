strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;

	dest_len = strlen(dest);
	src_len = strlen(src);

	if (dest_len+src_len >= size)
		return (dest_len + src_len);
	memcpy(dest+dest_len, src, src_len+1);

	return (dest_len + src_len);

}
