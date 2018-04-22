/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:10:42 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_hash_ptr(int *result)
{
	push_chars('0', 1, result);
	push_chars('x', 1, result);
}

void	pre_padding_ptr(t_pf *arg, size_t nbr_len, int *result)
{
	if (arg->width > arg->precision + 2 && arg->width > nbr_len + 2 &&
			!(arg->flags & FLAG_MINUS) && !(arg->flags & FLAG_ZERO))
	{
		if (arg->precision > nbr_len)
			push_chars(' ', arg->width - arg->precision - 2, result);
		else
			push_chars(' ', arg->width - nbr_len - 2, result);
	}
}

void	fill_ptr(t_pf *arg, char *nbr_str, size_t nbr_len, int *result)
{
	print_hash_ptr(result);
	if (arg->precision > nbr_len)
		push_chars('0', arg->precision - nbr_len, result);
	while (nbr_len--)
		push_chars(*nbr_str++, 1, result);
}

void	post_padding_ptr(t_pf *arg, size_t nbr_len, int *result)
{
	char	char_to_fill;

	char_to_fill = ' ';
	if ((arg->flags & FLAG_ZERO) && !(arg->flags & FLAG_MINUS))
		char_to_fill = '0';
	if (arg->width > arg->precision + 2 && arg->width > nbr_len + 2 &&
			(arg->flags & FLAG_MINUS || arg->flags & FLAG_ZERO))
	{
		if (arg->precision > nbr_len)
			push_chars(char_to_fill, arg->width -
					arg->precision - 2, result);
		else
			push_chars(char_to_fill, arg->width - nbr_len - 2, result);
	}
}

void	handle_pointer(t_pf *arg, size_t nbr, int *result)
{
	char	*nbr_str;
	size_t	nbr_len;

	arg->base = 16;
	arg->length = LENGTH_SIZE_T;
	nbr_str = stringify_nbr(arg, nbr);
	nbr_len = ft_strlen(nbr_str);
	if (nbr == 0 && arg->flags & FLAG_GOT_PRECISION && !arg->precision)
		nbr_len = 0;
	pre_padding_ptr(arg, nbr_len, result);
	fill_ptr(arg, nbr_str, nbr_len, result);
	post_padding_ptr(arg, nbr_len, result);
	ft_memdel((void **)&nbr_str);
}
