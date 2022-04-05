/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:38:21 by ataji             #+#    #+#             */
/*   Updated: 2022/04/01 14:15:11 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	destroy_images(t_data *data)
{
	mlx_destroy_image(data->mlx, data->walls);
	mlx_destroy_image(data->mlx, data->player);
	mlx_destroy_image(data->mlx, data->exit);
	mlx_destroy_image(data->mlx, data->coins);
	mlx_destroy_image(data->mlx, data->backgroud);
}
