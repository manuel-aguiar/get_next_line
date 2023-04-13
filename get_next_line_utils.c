#include "get_next_line.h"

char	*gnl_strncat(char *buf, char *line, int *old_size, int inc_size)
{
	char	*new_line;
	int		i;
	int		j;

	new_line = malloc((*old_size + inc_size + 1) * sizeof(char));
	if (!new_line)
		return (NULL);
	if (line)
	{
		i = -1;
		while (++i < *old_size)
			new_line[i] = line[i];
		free(line);
	}
	else
		i = 0;
	j = -1;
	while (++j < inc_size)
		new_line[i + j] = buf[j];
	new_line[i + j] = '\0';
	*old_size += j;
	return (new_line);
}

void	clean_buf(char *buf, int pivot)
{
	int	i;

	i = 0;
	while (buf[pivot] && pivot < BUFFER_SIZE)
		buf[i++] = buf[pivot++];
	buf[i] = '\0';
}

int	update_line(char *buf, char **line, int *line_len)
{
	int	i;
	int	found;

	if (!*buf)
		return (0);
	found = 0;
	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	*line = gnl_strncat(buf, *line, line_len, i + (buf[i] == '\n'));
	if (buf[i] == '\n' || !*line)
		found = 1;
	clean_buf(buf, i + 1);
	return (found);
}