/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:02:58 by dubex             #+#    #+#             */
/*   Updated: 2023/11/01 01:51:29 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_init(t_data *data)
{
	data->cell = NULL;
	data->cell2 = NULL;
	data->head = NULL;
	data->head2 = NULL;
	data->splitted = 0;
}

int	main(int argc, char **argv)
{
	t_data	data;

	ft_init(&data);
	ft_parse_arg(argc, argv, &data);
	ft_index(&data);
	ft_radix(&data);
	ft_close_all(&data);
	return (0);
}
