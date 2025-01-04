/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:59:17 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/30 10:59:22 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_format(char c, va_list args, int *count)
{
	if (c == '%')
		ft_putchar(c, count);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_put_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'p')
		*count += hex_pointer(va_arg(args, void *));
	else if (c == 'x')
		*count += print_hex_lowercase(va_arg(args, unsigned int));
	else if (c == 'X')
		*count += print_hex_uppercase(va_arg(args, unsigned int));
}
