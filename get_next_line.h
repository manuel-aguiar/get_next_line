/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:30:35 by mmaria-d          #+#    #+#             */
/*   Updated: 2023/05/14 20:34:56 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# ifndef  BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define MAX_FD 1024

# include <unistd.h>
# include <stdlib.h>

/* get_next_line.c*/
char	*get_next_line(int fd);

/* get_next_line_utils.c*/
char	*gnl_strncat(char *buf, char *line, int *old_size, int inc_size);
void	clean_buf(char *buf, int pivot);
int		update_line(char *buf, char **line, int *line_len);
int		buffer_refill(int fd, char *buf, char **line);

#endif
