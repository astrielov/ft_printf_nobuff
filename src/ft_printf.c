/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:32:56 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/22 14:25:03 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "libft/libft.h"

void	inner_pf(char *format, va_list va, int *result)
{
	t_pf	*arg_params;

	arg_params = NULL;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format++);
			*result += 1;
			continue;
		}
		if (*(++format))
		{
			parse(&format, va, &arg_params);
			if (arg_params->specifier)
				handle_argument(va, arg_params, result);
		}
	}
	ft_memdel((void **)&arg_params);
}

int		ft_printf(const char *format, ...)
{
	va_list	va;
	int		result;

	result = 0;
	va_start(va, format);
	inner_pf((char *)format, va, &result);
	va_end(va);
	return (result);
}
