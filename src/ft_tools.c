/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:47:29 by jcuzin            #+#    #+#             */
/*   Updated: 2023/11/01 02:05:21 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_str_locate(char *str, char target)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == target)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_arg(t_data *data)
{
	int	i;

	i = 0;
	while (data->input[i])
		i++;
	return (i);
}

void	ft_free_list(t_list *head)
{
	while (head)
		ft_del_first_cell(&head);
}

void	ft_close_all(t_data *data)
{
	int	i;

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
	if (ft_is_list_empty('a', data) == 0)
		ft_free_list(data->head);
	if (ft_is_list_empty('b', data) == 0)
		ft_free_list(data->head2);
	if (data->list)
		free(data->list);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	i2;
	int	s2_len;

	if (!s1 || !s2)
		return (0);
	i = 0;
	i2 = 0;
	s2_len = ft_strlen(s2);
	if (ft_atoi(s1) == ft_atoi(s2))
		return (1);
	while (s1[i] == s2[i2])
	{
		if (i2 == s2_len)
			return (1);
		i++;
		i2++;
	}
	return (0);
}
