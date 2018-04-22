/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <astrelov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:06:24 by astrelov          #+#    #+#             */
/*   Updated: 2018/04/22 14:25:03 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

void	print_sign_decimal(t_pf *arg, int *result)
{
	if (arg->nbr_is_negative)
		push_chars('-', 1, result);
	else if (arg->flags & FLAG_PLUS)
		push_chars('+', 1, result);
	else if (arg->flags & FLAG_SPACE)
		push_chars(' ', 1, result);
}

void	pre_padding_decimal(t_pf *arg, size_t nbr_len, int *result)
{
	char char_to_fill;

	char_to_fill = ' ';
	if ((arg->flags & FLAG_ZERO) && !(arg->flags & FLAG_GOT_PRECISION))
	{
		char_to_fill = '0';
		print_sign_decimal(arg, result);
	}
	if (!(arg->flags & FLAG_MINUS))
		decimal_pre_padding_helper(arg, nbr_len, result, char_to_fill);
	if (char_to_fill == ' ')
		print_sign_decimal(arg, result);
	if (arg->precision > nbr_len)
	{
		if (char_to_fill == '0')
			print_sign_decimal(arg, result);
		push_chars('0', arg->precision - nbr_len, result);
	}
}

void	fill_decimal(char *nbr_str, size_t nbr_len, int *result)
{
	while (nbr_len--)
		push_chars(*nbr_str++, 1, result);
}

void	post_padding_decimal(t_pf *arg, size_t nbr_len, int *result)
{
	if (arg->width > nbr_len && nbr_len > arg->precision)
		push_chars(' ', arg->width - nbr_len, result);
	if (arg->width > arg->precision && arg->precision >= nbr_len)
		push_chars(' ', arg->width - arg->precision, result);
}

void	decimal(t_pf *arg, char *nbr_str, size_t nbr_len, int *result)
{
	if (*nbr_str == '0' && nbr_len == 1 && arg->flags & FLAG_GOT_PRECISION)
		nbr_len = 0;
	if (arg->nbr_is_negative || arg->flags & (FLAG_SPACE | FLAG_PLUS))
		arg->width -= arg->width > 0 ? 1 : 0;
	pre_padding_decimal(arg, nbr_len, result);
	fill_decimal(nbr_str, nbr_len, result);
	if (arg->flags & FLAG_MINUS)
		post_padding_decimal(arg, nbr_len, result);
}
