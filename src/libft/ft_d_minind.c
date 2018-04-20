/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_minind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:06:55 by astrelov          #+#    #+#             */
/*   Updated: 2018/04/18 12:43:46 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_d_minind(int *arr, size_t len)
{
	int		minind;

	minind = 0;
	if (!arr)
	{
		ft_errmsg("ft_d_minind: incorrect input to function.\n");
		return (-1);
	}
	while (len--)
		if (arr[len] <= arr[minind])
			minind = (int)len;
	return (minind);
}
