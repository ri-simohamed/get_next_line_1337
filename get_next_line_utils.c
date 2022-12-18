#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int len;

	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return NULL;
	while (*str != (char)c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}


char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*location;

	if (!s1)
		s1 = "";
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	location = malloc ((len_s1 + len_s2) + 1);
	if (!location)
		return (0);
	else
	{
		ft_strlcpy(location, s1, len_s1 += 1);
		ft_strlcpy(location + (len_s1 - 1), s2, len_s2 + 1);
	}
	return (location);
}
