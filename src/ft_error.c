/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 03:14:47 by jcuzin            #+#    #+#             */
/*   Updated: 2023/11/01 02:07:02 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_close_short(char *error, t_data *data)
{
	ft_printf("%s\n", error);
	ft_close_all(data);
	exit (1);
}

void	ft_close_no_alloc(char *error, t_data *data)
{
	int	i;

	(void) data;
	ft_printf("%s\n", error);
	i = 0;
	if (data->arg_nb >= 2 && data->splitted == 1)
	{
		while (data->input[i])
		{
			free(data->input[i]);
			i++;
		}
		free(data->input);
	}
	exit(1);
}

void	ft_error_log(int code, t_data	*data)
{
	if (code == 1)
		ft_close_short("Error", data);
	else if (code == 2)
		ft_close_no_alloc("Error", data);
	else if (code == 3)
		ft_close_no_alloc("Error", data);
	else if (code == 4)
		ft_close_short("Error", data);
	else if (code == 5)
		ft_close_short("Error", data);
	else if (code == 6)
		ft_close_short("Error", data);
	else if (code == 7)
		ft_close_short("Error", data);
	else if (code == 8)
		ft_close_no_alloc("Error", data);
	else if (code == 9)
		ft_close_short("Error", data);
}
