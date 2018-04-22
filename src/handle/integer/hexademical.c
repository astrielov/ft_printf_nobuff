/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexademical.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <astrelov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:06:09 by astrelov          #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

void	print_hash_hex(t_pf *arg, int *result)
{
	push_chars('0', 1, result);
	push_chars((char)(arg->flags & FLAG_UPPERCASE ? 'X' : 'x'), 1, result);
}

void	pre_padding_hexademical(t_pf *arg, size_t nbr_len, int *result)
{
	char	char_to_fill;

	char_to_fill = (char)(arg->flags & FLAG_ZERO ? '0' : ' ');
	if (arg->flags & FLAG_ZERO && arg->flags & FLAG_HASH && nbr_len)
		print_hash_hex(arg, result);
	if (!(arg->flags & FLAG_MINUS))
	{
		if (arg->width > arg->precision && arg->precision > nbr_len)
			push_chars(char_to_fill, arg->width - arg->precision, result);
		if (arg->width > nbr_len && nbr_len > arg->precision &&
				(arg->flags & FLAG_GOT_PRECISION))
			push_chars(char_to_fill, arg->width - nbr_len, result);
		if (arg->width > arg->precision && arg->precision == nbr_len)
			push_chars(char_to_fill, arg->width - arg->precision, result);
		if (arg->width > nbr_len && !(arg->flags & FLAG_GOT_PRECISION))
			push_chars(char_to_fill, arg->width - nbr_len, result);
	}
	if (arg->precision > nbr_len)
	{
		if (arg->flags & FLAG_HASH && nbr_len)
			print_hash_hex(arg, result);
		push_chars('0', arg->precision - nbr_len, result);
	}
}

void	fill_hexademical(t_pf *arg, char *nbr_str,
						size_t nbr_len, int *result)
{
	if (arg->flags & FLAG_HASH && nbr_len >= arg->precision && nbr_len)
		if (!(nbr_len == 1 && *nbr_str == '0'))
			if (!(arg->width > nbr_len + 2 && (arg->flags & FLAG_ZERO)))
				print_hash_hex(arg, result);
	while (nbr_len--)
		push_chars(*nbr_str++, 1, result);
}

void	post_padding_hexademical(t_pf *arg, size_t nbr_len, int *result)
{
	if (arg->width > nbr_len && nbr_len > arg->precision)
		push_chars(' ', arg->width - nbr_len, result);
	if (arg->width > arg->precision && arg->precision >= nbr_len)
		push_chars(' ', arg->width - arg->precision, result);
}

void	hexademical(t_pf *arg, char *nbr_str, size_t nbr_len, int *result)
{
	if (*nbr_str == '0' && nbr_len == 1 && arg->flags & FLAG_GOT_PRECISION)
		nbr_len = 0;
	if (arg->flags & FLAG_GOT_PRECISION)
		arg->flags &= ~FLAG_ZERO;
	if (arg->flags & FLAG_HASH && nbr_len)
		arg->width -= (arg->width > 2) ? 2 : arg->width;
	pre_padding_hexademical(arg, nbr_len, result);
	fill_hexademical(arg, nbr_str, nbr_len, result);
	if (arg->flags & FLAG_MINUS)
		post_padding_hexademical(arg, nbr_len, result);
}
