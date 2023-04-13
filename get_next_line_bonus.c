#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buf[MAX_FD][BUFFER_SIZE + 1];
	char	*line;
	int		found;
	int		bytes;
	int		line_len;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > MAX_FD || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	line_len = 0;
	found = 0;
	while (!found)
	{
		found = update_line(buf[fd], &line, &line_len);
		if (found && !line)
			return (NULL);
		if (!found)
		{
			bytes = read(fd, buf[fd], BUFFER_SIZE);
			if (bytes == 0)
				return (line);
			buf[fd][bytes] = '\0';
		}
	}
	return (line);
}
