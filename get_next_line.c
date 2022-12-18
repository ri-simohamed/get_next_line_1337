#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *buffer;
    static char     *str;
    int r_byts;

    r_byts = 1;
    buffer = malloc((BUFFER_SIZE + 1) * (sizeof(char)));
    while (r_byts > 0 && !(ft_strchr(str, '\n')))
    {

        r_byts = read(fd, buffer, BUFFER_SIZE);
        buffer[r_byts] = '\0';
        if (r_byts == -1)
            return (NULL);
        str = ft_strjoin(str, buffer);
    }
    free(buffer);
    return str;
}

int main(int argc, char const *argv[])
{
    int fd = open("testfile.txt", O_RDONLY);

    printf("%s\n", get_next_line(fd));

    return 0;
}
