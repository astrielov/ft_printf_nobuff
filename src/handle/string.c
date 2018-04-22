/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:25:33 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"
#include "../libft/libft.h"

size_t	str_bytes_to_print(t_pf *arg, char *str)
{
	size_t	str_bytes;

	str_bytes = ft_strlen(str);
	if ((arg->flags & FLAG_GOT_PRECISION) && str_bytes > arg->precision)
		str_bytes = arg->precision;
	return (str_bytes);
}

void	str_pre_padding(t_pf *arg, size_t str_bytes_to_print, int *result)
{
	char	char_to_fill;

	char_to_fill = (char)(arg->flags & FLAG_ZERO ? '0' : ' ');
	while (!(arg->flags & FLAG_MINUS) && arg->width-- > str_bytes_to_print)
		push_chars(char_to_fill, 1, result);
}

void	str_post_padding(t_pf *arg, size_t str_bytes_to_print, int *result)
{
	char	char_to_fill;

	char_to_fill = ' ';
	while ((arg->flags & FLAG_MINUS) && arg->width-- > str_bytes_to_print)
		push_chars(char_to_fill, 1, result);
}

void	fill_str(char *str, size_t str_bytes, int *result)
{
	while (str_bytes--)
		push_chars(*str++, 1, result);
}

void	handle_string(t_pf *arg, wchar_t *str, int *result)
{
	size_t	str_bytes;

	prepare_string_arg(arg);
	if (!str)
	{
		arg->specifier = 's';
		str = (wchar_t *)"(null)";
	}
	if (arg->specifier == 'S')
		str_bytes = wstr_bytes_to_print(arg, str);
	else
		str_bytes = str_bytes_to_print(arg, (char *)str);
	str_pre_padding(arg, str_bytes, result);
	if (arg->specifier == 's')
		fill_str((char *)str, str_bytes, result);
	if (arg->specifier == 'S')
		fill_wide_str(arg, str, str_bytes, result);
	str_post_padding(arg, str_bytes, result);
}
