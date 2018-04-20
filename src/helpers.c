/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <astrelov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 17:39:15 by astrelov          #+#    #+#             */
/*   Updated: 2018/04/20 17:39:44 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	push_chars(char chr, size_t amount, int *result)
{
	*result += amount;
	while (amount--)
		ft_putchar(chr);
}
