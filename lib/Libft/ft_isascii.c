/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:25:34 by jcuzin            #+#    #+#             */
/*   Updated: 2022/12/06 16:54:55 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int input)
{
	if ((input >= 0) && (input <= 127))
		return (1);
	else
		return (0);
}
