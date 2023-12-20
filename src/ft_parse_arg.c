/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:08:10 by jcuzin            #+#    #+#             */
/*   Updated: 2023/11/01 02:07:33 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_convert(t_data *data)
{
	int		i;
	t_list	*previous;

	i = 0;
	previous = NULL;
	while (i < data->arg_nb)
	{
		if (ft_atoi((char *)data->input[i]) > INT_MAX \
		|| ft_atoi((char *)data->input[i]) < INT_MIN \
		|| ft_strlen((char *)data->input[i]) > 11 \
		|| ft_strlen((char *)data->input[i]) == 0)
			ft_error_log(9, data);
		data->cell = ft_create_cell(ft_atoi((char *)data->input[i]), data);
		ft_add_cell(previous, data->cell, data);
		if (!data->cell)
			return (0);
		i++;
		previous = data->cell;
	}
	return (1);
}

int	ft_check_rep(t_data *data)
{
	char	*digit;
	int		arg;
	int		i;

	arg = 0;
	i = 0;
	while (data->input[arg])
	{
		digit = data->input[arg];
		i = arg;
		while (i < data->arg_nb)
		{
			i++;
			if (ft_strcmp(data->input[i], digit) == 1)
				return (0);
		}
		arg++;
	}
	return (1);
}

int	ft_check_nb(t_data *data)
{
	int	arg;
	int	i;

	arg = 0;
	i = 0;
	while (data->input[arg])
	{
		i = 0;
		while (data->input[arg][i])
		{
			if (data->input[arg][i] == '-')
			{
				if (ft_isdigit(data->input[arg][++i]) == 0)
					return (0);
			}
			else
			{
				if (ft_isdigit(data->input[arg][i]) == 0)
					return (0);
			}
			i++;
		}
		arg++;
	}
	return (1);
}

void	ft_parse_arg(int argc, char **argv, t_data *data)
{
	data->arg_nb = argc - 1;
	data->input = argv + 1;
	if (argc == 1)
		exit(1);
	if (ft_strlen(argv[1]) > 1 && data->arg_nb == 1 \
	&& ft_str_locate(argv[1], ' ') == 1)
	{
		data->input = ft_split(argv[1], ' ');
		data->arg_nb = ft_count_arg(data);
		data->splitted = 1;
	}
	if (ft_check_nb(data) == 0 || ft_check_rep(data) == 0)
		ft_error_log(2, data);
	data->list = malloc(sizeof(int) * (argc - 1));
	if (!data->list)
		ft_error_log(4, data);
	if (ft_convert(data) == 0)
		ft_error_log(2, data);
}
