/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:03:43 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/20 17:31:47 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"
#include "../libft/libft.h"

void	handle_argument(va_list va, t_pf *arg, int *result)
{
	if (ft_strchr("dDioOuUxX", arg->specifier))
		handle_number(arg, va_arg(va, uintmax_t), result);
	else if (ft_strchr("cC", arg->specifier))
		handle_char(arg, va_arg(va, wchar_t), result);
	else if (ft_strchr("sS", arg->specifier))
		handle_string(arg, va_arg(va, wchar_t *), result);
	else if (arg->specifier == 'p')
		handle_pointer(arg, va_arg(va, size_t), result);
	else
		invalid_specifier(arg, result);
}
