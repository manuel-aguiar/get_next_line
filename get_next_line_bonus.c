/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:30:32 by mmaria-d          #+#    #+#             */
/*   Updated: 2023/05/14 20:38:08 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[MAX_FD][BUFFER_SIZE + 1];
	char		*line;
	int			found;
	int			line_len;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > MAX_FD)
		return (NULL);
	line = NULL;
	line_len = 0;
	found = 0;
	while (!found)
	{
		found = update_line(buf[fd], &line, &line_len);
		if (found && !line)
			return (NULL);
		if (!found && !buffer_refill(fd, buf[fd], &line))
			break ;
	}
	return (line);
}
