/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:21:07 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/22 13:02:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

size_t		wide_char_bytes(wchar_t chr)
{
	size_t	binary_len;
	int		tmp;

	binary_len = 0;
	tmp = chr;
	while (tmp)
	{
		tmp /= 2;
		binary_len++;
	}
	if (binary_len <= 7)
		return (1);
	if (binary_len <= 11)
		return (2);
	if (binary_len <= 16)
		return (3);
	return (4);
}

void		one_byte(unsigned int chr, int *result)
{
	push_chars(chr, 1, result);
}

void		two_bytes(unsigned int chr, int *result)
{
	int				mask;
	unsigned char	o1;
	unsigned char	o2;

	mask = 49280;
	o1 = ((chr >> 6) << 27) >> 27;
	o2 = (chr << 26) >> 26;
	push_chars((mask >> 8) | o1, 1, result);
	push_chars(((mask << 24) >> 24) | o2, 1, result);
}

void		three_bytes(unsigned int chr, int *result)
{
	unsigned int	mask;
	unsigned char	o1;
	unsigned char	o2;
	unsigned char	o3;

	mask = 14712960;
	o1 = ((chr >> 12) << 28) >> 28;
	o2 = ((chr >> 6) << 26) >> 26;
	o3 = (chr << 26) >> 26;
	push_chars((mask >> 16) | o1, 1, result);
	push_chars(((mask << 16) >> 24) | o2, 1, result);
	push_chars(((mask << 24) >> 24) | o3, 1, result);
}

void		four_bytes(unsigned int chr, int *result)
{
	unsigned int	mask;
	unsigned char	o1;
	unsigned char	o2;
	unsigned char	o3;
	unsigned char	o4;

	mask = 4034953344;
	o1 = ((chr >> 18) << 29) >> 29;
	o2 = ((chr >> 12) << 26) >> 26;
	o3 = ((chr >> 6) << 26) >> 26;
	o4 = (chr << 26) >> 26;
	push_chars((mask >> 24) | o1, 1, result);
	push_chars(((mask << 8) >> 24) | o2, 1, result);
	push_chars(((mask << 16) >> 24) | o3, 1, result);
	push_chars(((mask << 24) >> 24) | o4, 1, result);
}
