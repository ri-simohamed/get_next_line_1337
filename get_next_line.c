/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:51:17 by mrami             #+#    #+#             */
/*   Updated: 2022/11/28 21:27:54 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char	*ft_strjoin(char *str, char *buff)
{
	int		i;
	int		j;
	char	*join;
	
	if (!str || !buff)
		return (NULL);
	join = (char *)malloc((ft_strlen(str) + ft_strlen(buff) + 1) * sizeof(char *));
	if (!join)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		join[i] = str[i];
	while (buff[j] != '\0')
		join[i++] = buff[j++];
	join[i] = '\0';
	return (join);
}

char	*ft_read_from_str(int fd, char *str)
{
	char	*buff;
	int		rd_byts;
}

char	*get_next_line (int fd)
{
	
}
