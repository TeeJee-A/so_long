/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:11:42 by ataji             #+#    #+#             */
/*   Updated: 2022/04/01 12:01:15 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	*data;
	int		count;

	data = (t_data *)malloc(sizeof(t_data));
	if (ac != 2)
		write_error("warning : arguments");
	if (check_name_map(av[1]) == -1 || check_name_map(av[1]) == 0)
		write_error("warning : wrong map name");
	count = count_line(av[1]);
	data->map = alloc_map(data, count, av[1]);
	check_format_map(data, data->map);
	check_walls_map(data, data->map);
	check_right_left_walls(data, data->map);
	check_characters(data, data->map);
	check_param(data, data->map);
	find_player(data, data->map);
	size_win_img(data, av[1]);
	ft_mlx_init(data);
	mlx_img(data);
	mlx_push_img_to_window(data);
	mlx_while(data);
	destroy_images(data);
	free(data->mlx);
	my_free(data->map);
	return (0);
}
