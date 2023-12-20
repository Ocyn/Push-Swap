/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manual_cases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:55:43 by jcuzin            #+#    #+#             */
/*   Updated: 2023/11/01 01:48:09 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_case_3(t_data *data)
{
	if ((data->head->index == 1 && data->head->next->index == 0 \
	&& data->head->next->next->index == 2) || (data->head->index == 0 \
	&& data->head->next->index == 2 \
	&& data->head->next->next->index == 1) || (data->head->index == 2 \
	&& data->head->next->index == 1 \
	&& data->head->next->next->index == 0))
		ft_sa(data);
	if (data->head->index == 1 && data->head->next->index == 2 \
	&& data->head->next->next->index == 0)
		ft_rra(data);
	if (data->head->index == 2 && data->head->next->index == 0 \
	&& data->head->next->next->index == 1)
		ft_ra(data);
}

void	ft_case_53(t_data *data)
{
	if ((data->head->index == 3 && data->head->next->index == 2 \
	&& data->head->next->next->index == 4) || (data->head->index == 2 \
	&& data->head->next->index == 4 \
	&& data->head->next->next->index == 3) || (data->head->index == 4 \
	&& data->head->next->index == 3 \
	&& data->head->next->next->index == 2))
		ft_sa(data);
	if (data->head->index == 3 && data->head->next->index == 4 \
	&& data->head->next->next->index == 2)
		ft_rra(data);
	if (data->head->index == 4 && data->head->next->index == 2 \
	&& data->head->next->next->index == 3)
		ft_ra(data);
}

void	ft_case_5(t_data *data)
{
	while (data->head->index != 0 && data->head->index != 1)
		ft_ra(data);
	ft_pb(data);
	while (data->head->index != 1 && data->head->index != 0)
		ft_ra(data);
	ft_pb(data);
	ft_case_53(data);
	ft_pa(data);
	ft_pa(data);
	if (ft_is_sorted(data->head) == 0)
		ft_sa(data);
}
