/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <astrelov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:06:24 by astrelov          #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

void	decimal_pre_padding_helper(t_pf *arg, size_t nbr_len, int *result,
	char char_to_fill)
{
	if (arg->width > arg->precision && arg->precision > nbr_len)
		push_chars(' ', arg->width - arg->precision, result);
	if (arg->width > nbr_len && nbr_len > arg->precision &&
			(arg->flags & FLAG_GOT_PRECISION))
		push_chars(char_to_fill, arg->width - nbr_len, result);
	if (arg->width > arg->precision && arg->precision == nbr_len)
		push_chars(char_to_fill, arg->width - arg->precision, result);
	if (arg->width > nbr_len && !(arg->flags & FLAG_GOT_PRECISION))
		push_chars(char_to_fill, arg->width - nbr_len, result);
}
