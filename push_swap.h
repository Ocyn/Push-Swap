/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:41:26 by dubex             #+#    #+#             */
/*   Updated: 2023/09/11 00:20:44 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "lib/ft_ext.h"
# include <limits.h>

typedef struct s_list
{
	int					in;
	int					index;
	struct s_list		*next;
}	t_list;

typedef struct s_data
{
	t_list				*cell;
	t_list				*cell2;
	t_list				*head;
	t_list				*head2;
	char				**input;
	int					arg_nb;
	int					splitted;
	int					*list;
}	t_data;

int				ft_sort(t_data *data);
int				ft_strcmp(char *s1, char *s2);
int				ft_is_list_empty(char list, t_data *data);
int				ft_is_sorted(t_list *list);

void			ft_close_all(t_data *data);
void			ft_close_no_alloc(char *error, t_data *data);
void			ft_check_list(t_list *prev, t_list *cell);
void			ft_parse_arg(int argc, char **argv, t_data *data);
void			ft_error_log(int code, t_data *data);
void			ft_add_cell(t_list *previous, t_list *n_cell, t_data *data);
void			ft_del_first_cell(t_list **head);

void			ft_manual_cases(t_data *data);
void			ft_case_3(t_data *data);
void			ft_case_5(t_data *data);
void			ft_radix(t_data *data);
void			ft_ra_utils(int st, t_list *cell, t_list *temp);
void			ft_ra(t_data *data);
void			ft_rra(t_data *data);
void			ft_sa(t_data *data);
void			ft_pa(t_data *data);
void			ft_pb(t_data *data);

t_list			*ft_create_cell(int value, t_data *data);
t_list			*ft_last_cell(t_list *cell, t_data *data);
void			ft_index(t_data *data);

int				ft_count_arg(t_data *data);
int				ft_str_locate(char *str, char target);

#endif