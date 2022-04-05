/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_name_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:48:50 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 15:44:21 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_name_map(char *file)
{
	int	count;
	int	fd;

	count = ft_strlen(file);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	close (fd);
	if (file[count - 1] == 'r' && file[count - 2] == 'e'
		&& file[count - 3] == 'b' && file[count - 4] == '.')
		return (1);
	return (0);
}
