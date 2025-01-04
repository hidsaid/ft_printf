/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:46:31 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/30 10:46:33 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	count = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			count += write(1, &str[i], 1);
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			handle_format(str[i + 1], args, &count);
			i++;
		}
		i++;
	}
	return (va_end(args), count);
}
