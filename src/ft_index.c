/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 04:18:37 by jcuzin            #+#    #+#             */
/*   Updated: 2023/09/10 22:11:40 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_index_counting(t_list *check, t_list *cell)
{
	int	i_index;

	i_index = 0;
	while (check)
	{
		if (check->in < cell->in)
			i_index++;
		check = check->next;
	}
	return (i_index);
}

void	ft_index(t_data *data)
{
	t_list	*check;

	check = data->head;
	data->cell = data->head;
	while (data->cell)
	{
		data->cell->index = ft_index_counting(check, data->cell);
		data->cell = data->cell->next;
	}
	data->cell = data->head;
}
