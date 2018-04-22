/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <astrelov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:05:23 by astrelov          #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

void	pre_padding_octal(t_pf *arg, size_t nbr_len, int *result)
{
	char char_to_fill;

	char_to_fill = ' ';
	if ((arg->flags & FLAG_ZERO) && !(arg->flags & FLAG_GOT_PRECISION))
		char_to_fill = '0';
	if (!(arg->flags & FLAG_MINUS))
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
	if (arg->precision > nbr_len)
		push_chars('0', arg->precision - nbr_len, result);
}

void	fill_octal(t_pf *arg, char *nbr_str, size_t nbr_len, int *result)
{
	if (arg->flags & FLAG_HASH)
	{
		push_chars('0', 1, result);
		nbr_len--;
	}
	while (nbr_len--)
		push_chars(*nbr_str++, 1, result);
}

void	post_padding_octal(t_pf *arg, size_t nbr_len, int *result)
{
	if (arg->width > nbr_len && nbr_len > arg->precision)
		push_chars(' ', arg->width - nbr_len, result);
	if (arg->width > arg->precision && arg->precision >= nbr_len)
		push_chars(' ', arg->width - arg->precision, result);
}

void	octal(t_pf *arg, char *nbr_str, size_t nbr_len, int *result)
{
	if (*nbr_str == '0' && nbr_len == 1 && arg->flags & FLAG_GOT_PRECISION)
		nbr_len = 0;
	if (arg->flags & FLAG_HASH && !(nbr_len == 1 && *nbr_str == '0'))
		nbr_len += 1;
	pre_padding_octal(arg, nbr_len, result);
	fill_octal(arg, nbr_str, nbr_len, result);
	if (arg->flags & FLAG_MINUS)
		post_padding_octal(arg, nbr_len, result);
}
