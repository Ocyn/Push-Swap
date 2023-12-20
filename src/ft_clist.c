/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:47:21 by jcuzin            #+#    #+#             */
/*   Updated: 2023/09/10 21:14:28 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_list_empty(char list, t_data *data)
{
	if (list == 'a')
	{
		if (!data->head)
			return (1);
		else
			return (0);
	}
	else
	{
		if (!data->head2)
			return (1);
		else
			return (0);
	}
}

t_list	*ft_last_cell(t_list *cell, t_data *data)
{
	cell = data->head;
	if (!cell)
		ft_error_log(6, data);
	while (cell)
		cell = cell->next;
	return (cell);
}

void	ft_del_first_cell(t_list **head)
{
	t_list	*temp;

	temp = NULL;
	temp = (*head);
	(*head) = (*head)->next;
	free(temp);
}

t_list	*ft_create_cell(int value, t_data *data)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		ft_error_log(5, data);
	cell->in = value;
	cell->next = NULL;
	return (cell);
}

void	ft_add_cell(t_list *previous, t_list *n_cell, t_data *data)
{
	if (!n_cell)
		ft_error_log(6, data);
	if (previous)
		previous->next = n_cell;
	if (!data->head)
		data->head = n_cell;
}
