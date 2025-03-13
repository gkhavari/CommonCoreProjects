char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while(len)
	{
		if (s[len] == (unsigned char)c)
			return (&s[len]);
		len--;
	}
	return (NULL);
}
