/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eroque-d <eroque-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 19:03:01 by eroque-d          #+#    #+#             */
/*   Updated: 2026/07/02 12:17:47 by eroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	init_printf_table(t_printf *ctx)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		ctx->table[i] = NULL;
		i++;
	}
	ctx->table['c'] = &print_char;
	ctx->table['s'] = &print_string;
	ctx->table['d'] = &print_int;
	ctx->table['i'] = &print_int;
	ctx->table['u'] = &print_uint;
	ctx->table['x'] = &print_hex_lower;
	ctx->table['X'] = &print_hex_upper;
	ctx->table['p'] = &print_pointer;
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	t_printf	ctx;
	int			counter;

	counter = 0;
	init_printf_table(&ctx);
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%' && *(fmt + 1))
		{
			fmt++;
			if (ctx.table[(unsigned char)*fmt])
				ctx.table[(unsigned char)*fmt](args, &counter);
			else if (*fmt == '%')
				ft_putchar_count('%', &counter);
		}
		else
			ft_putchar_count(*fmt, &counter);
		fmt++;
	}
	va_end(args);
	return (counter);
}
