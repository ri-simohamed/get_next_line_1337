/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:47:38 by mrami             #+#    #+#             */
/*   Updated: 2022/12/14 15:44:12 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10

#endif // !BUFFER_SIZE

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

size_t	ft_strlen(char *s);
char	*get_next_line(int fd);
char	*ft_read_str(int fd, char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s, char *buff);
char	*ft_next_str(char *s);
char	*ft_get_line(char *s);

#endif // !HET_NEXT_LINE_H