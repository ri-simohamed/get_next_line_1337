/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:47:38 by mrami             #+#    #+#             */
/*   Updated: 2022/11/28 21:21:25 by mrami            ###   ########.fr       */
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

size_t	ft_strlen(char *s);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *str, char *buff);
//char	*ft_read_from_str(int fd, char *str);

#endif // !HET_NEXT_LINE_H