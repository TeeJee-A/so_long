/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:48:17 by ataji             #+#    #+#             */
/*   Updated: 2022/03/30 22:59:56 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_line(char *file)
{
	int		count;
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd <= 0)
		return (0);
	line = get_next_line(fd);
	if (!line)
		write_error("warning : empty map\n");
	count = 1;
	free(line);
	while (1)
	{
		line = get_next_line(fd);
		free(line);
		if (!line)
			break ;
		count++;
	}
	close (fd);
	return (count);
}
