/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:18 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:37 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*internal_get_next_line(int fd, char *str_buffer)
{
	int		byte;
	int		i;
	char	c;

	i = 0;
	byte = read(fd, &c, 1);
	while (byte > 0)
	{
		if (c == '\n' || c == EOF)
			break ;
		str_buffer[i] = c;
		i++;
		byte = read(fd, &c, 1);
	}
	if (i == 0 || byte < 0)
	{
		free(str_buffer);
		return (NULL);
	}
	str_buffer[i] = '\0';
	return (str_buffer);
}

char	*get_next_line(int fd)
{
	char	*str_buffer;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	str_buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!str_buffer)
		return (NULL);
	str_buffer = internal_get_next_line(fd, str_buffer);
	return (str_buffer);
}
