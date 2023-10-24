/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:27:04 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:19 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_read_line(int fd, char *str)
{
	char	*buffer;
	int		bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	bytes = 1;
	while ((!str || !ft_strchr(str, '\n')) && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes] = '\0';
		str = ft_strjoin(str, buffer);
		if (*str == '\0')
		{
			free(str);
			str = NULL;
		}
	}
	free(buffer);
	buffer = NULL;
	return (str);
}

char	*ft_get_line(char *str)
{
	int		count;
	int		index;
	char	*line;

	count = -1;
	index = 0;
	if (!str)
		return (NULL);
	while (str[index] && str[index] != '\n')
		index++;
	line = malloc((index + 2) * sizeof(char));
	if (!line)
		return (NULL);
	while (++count <= index)
		line[count] = str[count];
	count--;
	if (line[count] == '\n')
		line[count] = '\n';
	count++;
	line[count] = '\0';
	return (line);
}

char	*ft_next_line(char *str)
{
	int		count;
	int		shift;
	char	*nline;

	shift = 0;
	count = -1;
	while (str[shift] && str[shift] != '\n')
		shift++;
	nline = malloc((ft_strlen(str) - shift + 1) * sizeof(char));
	if (!nline)
		return (NULL);
	while (str[shift] != '\0')
		nline[++count] = str[++shift];
	nline[++count] = '\0';
	free (str);
	str = NULL;
	return (nline);
}

char	*get_next_line(int fd)
{
	static char	*fildes;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0))
		return (NULL);
	fildes = ft_read_line(fd, fildes);
	if (!fildes)
		return (NULL);
	line = ft_get_line(fildes);
	fildes = ft_next_line(fildes);
	return (line);
}
