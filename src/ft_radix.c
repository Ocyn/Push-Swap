/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 06:01:18 by jcuzin            #+#    #+#             */
/*   Updated: 2023/10/31 19:38:23 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_manual_cases(t_data *data)
{
	if (data->arg_nb == 3 && ft_is_sorted(data->head) == 0)
		ft_case_3(data);
	if (data->arg_nb == 5 && ft_is_sorted(data->head) == 0)
		ft_case_5(data);
	if (data->arg_nb == 2 && ft_is_sorted(data->head) == 0)
		ft_sa(data);
}

int	ft_binary(int input, int bit)
{
	return (input >> bit & 1);
}

void	ft_back_to_a(t_data *data)
{
	while (data->head2)
		ft_pa(data);
}

void	ft_radix(t_data *data)
{
	int	i;
	int	bin_index;

	bin_index = 0;
	ft_manual_cases(data);
	while (ft_is_sorted(data->head) == 0)
	{
		i = 0;
		while (i < data->arg_nb)
		{
			if (ft_binary(data->head->index, bin_index) == 0)
				ft_pb(data);
			else
				ft_ra(data);
			i++;
		}
		ft_back_to_a(data);
		bin_index++;
	}
}
