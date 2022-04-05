/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:58:11 by ataji             #+#    #+#             */
/*   Updated: 2022/04/03 12:48:50 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	main(int ac, char **av)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	if (ac != 2)
		write_error("warning : arguments");
	if (check_name_map(av[1]) == -1 || check_name_map(av[1]) == 0)
		write_error("warning : wrong map name");
	data->count_line = count_line(av[1]);
	data->map = alloc_map(data, data->count_line, av[1]);
	check_format_map(data, data->map);
	check_walls_map(data, data->map);
	check_right_left_walls(data, data->map);
	check_characters_bonus(data, data->map);
	check_param_bonus(data, data->map);
	find_player_bonus(data, data->map);
	size_win_img_bonus(data, av[1]);
	ft_mlx_init_bonus(data);
	mlx_img_bonus(data);
	mlx_push_img_to_window_bonus(data);
	mlx_while_bonus(data);
	destroy_images_bonus(data);
	free(data->mlx);
	my_free_bonus(data->map);
	return (0);
}
