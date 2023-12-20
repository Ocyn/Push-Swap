/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 06:04:41 by jcuzin            #+#    #+#             */
/*   Updated: 2023/09/10 22:32:13 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		if (list->index != i)
			return (0);
		i++;
		list = list->next;
	}
	return (1);
}

void	ft_pb(t_data *data)
{
	t_list	*swap;

	swap = NULL;
	if (ft_is_list_empty('a', data) == 0)
	{
		swap = data->head;
		data->head = data->head->next;
		swap->next = data->head2;
		data->head2 = swap;
		ft_printf("pb\n");
	}
}

void	ft_pa(t_data *data)
{
	t_list	*swap;

	swap = NULL;
	if (ft_is_list_empty('b', data) == 0)
	{
		swap = data->head2;
		data->head2 = data->head2->next;
		swap->next = data->head;
		data->head = swap;
		ft_printf("pa\n");
	}
}
