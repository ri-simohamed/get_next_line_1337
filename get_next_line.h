#ifndef GET_NUXT_LINE_H
#define GET_NUXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
#include <unistd.h>
#include <limits.h>

char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
#endif