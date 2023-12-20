/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 00:16:47 by jcuzin            #+#    #+#             */
/*   Updated: 2023/09/10 23:41:33 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra_utils(int st, t_list *cell, t_list *temp)
{
	int	swap;

	swap = 0;
	if (st == 1)
	{
		temp = NULL;
		temp = cell;
	}
	else
	{
		swap = cell->in;
		cell->in = temp->in;
		temp->in = swap;
		swap = cell->index;
		cell->index = temp->index;
		temp->index = swap;
	}
}
