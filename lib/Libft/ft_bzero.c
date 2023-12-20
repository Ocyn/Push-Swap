/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:21:35 by jcuzin            #+#    #+#             */
/*   Updated: 2022/12/06 19:25:03 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str0, size_t n)
{
	int		cursor;
	char	*str;

	cursor = 0;
	str = str0;
	while (n > 0)
	{
		str[cursor] = '\0';
		cursor++;
		n--;
	}
}