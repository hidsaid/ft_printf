/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 11:01:07 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/30 11:01:12 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_uppercase(unsigned long n)
{
	char	arr[19];
	char	*hex;
	int		i;
	int		count;

	count = 0;
	i = 0;
	hex = "0123456789ABCDEF";
	if (n == 0)
		count += write(1, "0", 1);
	while (n != 0)
	{
		arr[i++] = hex[n % 16];
		n = n / 16;
	}
	arr[i--] = '\0';
	while (i >= 0)
		count += write(1, &arr[i--], 1);
	return (count);
}

int	print_hex_lowercase(unsigned long n)
{
	char	arr[19];
	int		i;
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (n == 0)
		count += write(1, "0", 1);
	i = 0;
	while (n != 0)
	{
		arr[i++] = hex[n % 16];
		n = n / 16;
	}
	arr[i--] = '\0';
	while (i >= 0)
		count += write(1, &arr[i--], 1);
	return (count);
}

int	hex_pointer(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	return (count += (print_hex_lowercase((unsigned long)(p))));
}
