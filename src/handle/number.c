/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:34:17 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/18 14:39:35 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"
#include "../libft/libft.h"

void	prepare_number_arg(t_pf *arg)
{
	if (arg->specifier == 'X' || arg->specifier == 'O')
		arg->flags |= FLAG_UPPERCASE;
	if (arg->specifier == 'D' || arg->specifier == 'U' || arg->specifier == 'O')
		arg->length = LENGTH_LONG;
	if (ft_strchr("DOXU", arg->specifier))
		arg->specifier += 32;
	if (arg->specifier == 'i')
		arg->specifier = 'd';
	if (arg->specifier != 'd')
		arg->flags &= ~(FLAG_PLUS | FLAG_SPACE);
	if (arg->specifier == 'x')
		arg->base = 16;
	else if (arg->specifier == 'o')
		arg->base = 8;
	else
	{
		arg->base = 10;
		arg->flags &= ~FLAG_HASH;
	}
}

void	handle_number(t_pf *arg, uintmax_t nbr, int *result)
{
	char	*nbr_str;
	size_t	nbr_len;

	prepare_number_arg(arg);
	nbr_str = stringify_nbr(arg, nbr);
	nbr_len = ft_strlen(nbr_str);
	if (arg->base == 8)
		octal(arg, nbr_str, nbr_len, result);
	if (arg->base == 10)
		decimal(arg, nbr_str, nbr_len, result);
	if (arg->base == 16)
		hexademical(arg, nbr_str, nbr_len, result);
	ft_memdel((void **)&nbr_str);
}
