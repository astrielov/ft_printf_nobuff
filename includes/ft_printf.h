/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrielov <astrielov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:32:38 by astrielov         #+#    #+#             */
/*   Updated: 2018/04/20 17:31:09 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_NEW_FT_PRINTF_H
# define FT_PRINTF_NEW_FT_PRINTF_H

#include <stdio.h>

# include <inttypes.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

# define BASE_STRING		"0123456789abcdef"
# define FLAG_ZERO			(1 << 0)
# define FLAG_MINUS			(1 << 1)
# define FLAG_PLUS			(1 << 2)
# define FLAG_SPACE			(1 << 3)
# define FLAG_HASH			(1 << 4)
# define FLAG_UPPERCASE		(1 << 5)
# define FLAG_GOT_PRECISION	(1 << 6)
# define LENGTH_SHORT_SHORT	(1 << 0)
# define LENGTH_SHORT		(1 << 1)
# define LENGTH_LONG		(1 << 2)
# define LENGTH_LONG_LONG	(1 << 3)
# define LENGTH_INTMAX		(1 << 4)
# define LENGTH_SIZE_T		(1 << 5)

typedef struct				s_pf
{
	unsigned int			flags;
	unsigned int			width;
	unsigned int			precision;
	unsigned int			length;
	unsigned int			base;
	unsigned int			nbr_is_negative;
	char					specifier;
}							t_pf;

int							ft_printf(const char *format, ...);

unsigned int				parse_atoi(char **format);
void						parse(char **format, va_list va, t_pf **arg);
int							parse_flags(char **format, t_pf *arg);
int							parse_width(char **format, va_list va, t_pf *arg);
int							parse_precision(char **format, va_list va, t_pf *arg);
int							parse_length(char **format, t_pf *arg);

void						handle_argument(va_list va, t_pf *arg, int *result);
void						handle_number(t_pf *arg, uintmax_t nbr, int *result);
void						handle_char(t_pf *arg, wchar_t chr, int *result);
void						handle_string(t_pf *arg, wchar_t *str, int *result);
void						handle_pointer(t_pf *arg, size_t nbr, int *result);
void						invalid_specifier(t_pf *arg, int *result);

size_t						wide_char_bytes(wchar_t chr);
void						one_byte(unsigned int chr, int *result);
void						two_bytes(unsigned int chr, int *result);
void						three_bytes(unsigned int chr, int *result);
void						four_bytes(unsigned int chr, int *result);

void						push_chars(char chr, size_t amount, int *result);

void						prepare_string_arg(t_pf *arg);
size_t						wstr_bytes_to_print(t_pf *arg, wchar_t *str);
void						fill_wide_str(t_pf *arg, wchar_t *str, size_t str_bytes, int *result);

char						*stringify_nbr(t_pf *arg, uintmax_t nbr);
void						octal(t_pf *arg, char *nbr_str, size_t nbr_len, int *result);
void						decimal(t_pf *arg, char *nbr_str, size_t nbr_len, int *result);
void						hexademical(t_pf *arg, char *nbr_str, size_t nbr_len, int *result);

#endif
