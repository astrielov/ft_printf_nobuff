/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:54:36 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void		char_pre_padding(t_pf *arg, size_t bytes, int *result)
{
	char	char_to_fill;

	char_to_fill = (char)(arg->flags & FLAG_ZERO ? '0' : ' ');
	while (!(arg->flags & FLAG_MINUS) && (arg->width)-- > bytes)
		push_chars(char_to_fill, 1, result);
}

void		char_post_padding(t_pf *arg, size_t bytes, int *result)
{
	while ((arg->flags & FLAG_MINUS) && (arg->width)-- > bytes)
		push_chars(' ', 1, result);
}

void		fill_wide_char(unsigned int chr, size_t bytes, int *result)
{
	if (bytes == 1)
		one_byte(chr, result);
	else if (bytes == 2)
		two_bytes(chr, result);
	else if (bytes == 3)
		three_bytes(chr, result);
	else if (bytes == 4)
		four_bytes(chr, result);
}

void		fill_char(char chr, int *result)
{
	push_chars(chr, 1, result);
}

void		handle_char(t_pf *arg, wchar_t chr, int *result)
{
	size_t	bytes;

	if (arg->specifier == 'c' && arg->length == LENGTH_LONG)
		arg->specifier = 'C';
	bytes = arg->specifier == 'c' ? 1 : wide_char_bytes(chr);
	if (arg->specifier == 'c' || arg->specifier == 'C')
		char_pre_padding(arg, bytes, result);
	if (arg->specifier == 'c')
		fill_char((char)chr, result);
	else
		fill_wide_char((unsigned int)chr, bytes, result);
	if (arg->specifier == 'c' || arg->specifier == 'C')
		char_post_padding(arg, bytes, result);
}
