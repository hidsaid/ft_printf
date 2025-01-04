/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:47:53 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/30 11:08:22 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	char		c;

	if (n == -2147483648)
		*count += write(1, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		ft_putchar('-', count);
		ft_putnbr(n, count);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	else
	{
		c = n + '0';
		ft_putchar(c, count);
	}
}
