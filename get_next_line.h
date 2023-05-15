/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:30:35 by mmaria-d          #+#    #+#             */
/*   Updated: 2023/05/15 11:44:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# ifndef  BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/* get_next_line.c*/
char	*get_next_line(int fd);

/* get_next_line_utils.c
int	buffer_to_line(char *buf, char **line, int *line_len);
int	buffer_refill(int fd, char *buf, char **line);
*/
#endif
