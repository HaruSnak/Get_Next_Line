/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmoreno <shmoreno@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:41:19 by shmoreno          #+#    #+#             */
/*   Updated: 2024/03/17 18:03:25 by shmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
fill_buffer: Read the file using read to then store the content in a buffer.
If read returns an error or 0,
free the buffer and return NULL. Otherwise, return the buffer.

find_espace_sequence: Search for the first occurrence of \n in the buffer.
If found, return the line up to \n and store the rest in a new buffer.
Otherwise, return NULL.

process_stash: Search for the first occurrence of \n in the buffer. If found,
return the line up to \n and store the rest in a new buffer. Otherwise,
read the file using fill_buffer and store the content in a new buffer.
Concatenate the new buffer with the old one and repeat until finding \n.
Return the line up to \n and store the rest in a new buffer.
If read returns an error or 0,
free the buffer and return NULL. Otherwise, return the buffer.
get_next_line: Check if the parameters are valid. If yes,
call process_stash. Otherwise, free the buffer and return NULL.
*/
#include "get_next_line_bonus.h"

char	*fill_buffer(int fd)
{
	char	*buffer;
	ssize_t	read_line;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	read_line = read(fd, buffer, BUFFER_SIZE);
	if (read_line <= 0)
	{
		free(buffer);
		return (NULL);
	}
	buffer[read_line] = '\0';
	return (buffer);
}

char	*find_espace_sequence(char **stash_brut)
{
	char	*find_line;
	char	*tmp;
	size_t	i;

	i = 0;
	while ((*stash_brut)[i] != '\n' && (*stash_brut)[i] != '\0')
		i++;
	if ((*stash_brut)[i] == '\n')
	{
		find_line = ft_substr(*stash_brut, 0, i + 1);
		tmp = ft_substr(*stash_brut, i + 1, ft_strlen(*stash_brut) - i);
		free(*stash_brut);
		*stash_brut = tmp;
		return (find_line);
	}
	return (NULL);
}

char	*process_stash(char **stash, int fd)
{
	char	*tmp_stash;
	char	*line_read;
	char	*line;

	line = find_espace_sequence(stash);
	if (line)
		return (line);
	line_read = fill_buffer(fd);
	if (!line_read)
	{
		line = ft_strdup(*stash);
		free(*stash);
		*stash = NULL;
		if (*line)
			return (line);
		free(line);
		return (NULL);
	}
	tmp_stash = ft_strjoin(*stash, line_read);
	free(*stash);
	*stash = tmp_stash;
	free(line_read);
	return (get_next_line(fd));
}

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FD];

	if (fd < 0 || BUFFER_SIZE <= 0 || MAX_FD <= fd || read(fd, NULL, 0) < 0)
	{
		free(stash[fd]);
		stash[fd] = NULL;
		return (NULL);
	}
	if (!stash[fd])
		stash[fd] = ft_strdup("");
	return (process_stash(&stash[fd], fd));
}
/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error opening files\n");
		return (1);
	}
	printf("Reading from test1.txt:\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}*/
