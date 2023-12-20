/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 06:04:41 by jcuzin            #+#    #+#             */
/*   Updated: 2023/09/10 22:33:00 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_data *data)
{
	int	temp;

	temp = 0;
	if (data->head && data->head->next)
	{
		temp = data->head->in;
		data->head->in = data->head->next->in;
		data->head->next->in = temp;
		temp = data->head->index;
		data->head->index = data->head->next->index;
		data->head->next->index = temp;
		ft_printf("sa\n");
	}
}

void	ft_rra(t_data *data)
{
	t_list	*temp;

	temp = NULL;
	if (data->head->next)
	{
		data->cell = data->head;
		while (data->cell->next->next)
			data->cell = data->cell->next;
		temp = data->cell->next;
		data->cell->next = NULL;
		temp->next = data->head;
		data->head = temp;
		ft_printf("rra\n");
	}
}

void	ft_ra(t_data *data)
{
	t_list	*temp;

	temp = NULL;
	if (data->head->next)
	{
		data->cell = data->head;
		temp = data->cell;
		data->cell = data->cell->next;
		data->head = data->cell;
		while (data->cell->next)
			data->cell = data->cell->next;
		temp->next = NULL;
		data->cell->next = temp;
		ft_printf("ra\n");
	}
}
