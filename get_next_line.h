#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 42
# define MAX_FD 1024
# define BUFCLEAN MAX_FD + 1
# define ENDFILE -1

/* get_next_line.c*/
char	*get_next_line(int fd);

/* get_next_line_utils.c*/
char	*gnl_strncat(char *buf, char *line, int *old_size, int inc_size);
void	clean_buf(char *buf, int pivot);
int	update_line(char *buf, char **line, int *line_len);

#endif
