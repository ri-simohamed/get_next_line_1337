#include "get_next_line.h"

char *ft_read_str(int fd, char *str)
{
    char     *buffer;
    int r_byts;

    r_byts = 1;
    buffer = malloc((BUFFER_SIZE + 1) * (sizeof(char)));
    while (r_byts > 0 && !(ft_strchr(str, '\n')))
    {
        r_byts = read(fd, buffer, BUFFER_SIZE);
        if (r_byts == -1)
            return NULL;
        buffer[r_byts] = '\0';
        str = ft_strjoin(str, buffer);
    }
    free(buffer);
    return (str);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*line;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_get_right_str(char *str)
{
	int		i;
	int		j;
	char	*r_str;

	i = 0;
	if (!str)
		return NULL;
	while (str[i] && str[i] != '\n')
		i++;
	r_str = malloc(ft_strlen(str) - i + 1);
	if (!r_str)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		r_str[j++] = str[i++];
	r_str[j] = '\0';
	free(str);
	return(r_str);
}

char	*get_next_line(int fd)
{
	static	char	*str;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (NULL);
	str = ft_read_str(fd, str);
	if (!str || !str[0])
		return NULL;
	line = ft_get_line(str);
	str = ft_get_right_str(str);
	return(line);
}

// int main(int argc, char const *argv[])
// {
//     int fd = open("testfile.txt", O_RDONLY);

	
//     printf("%s", get_next_line(789456));
//     printf("%s", get_next_line(fd));
//     printf("%s", get_next_line(fd));
//     printf("%s", get_next_line(fd));
//     printf("%s", get_next_line(fd));
// 	printf("%s\n", get_next_line(fd));

// 	system("leaks a.out");

// 	pause();

//     return (0);
// }
