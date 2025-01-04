/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:52:00 by hidsaid           #+#    #+#             */
/*   Updated: 2024/11/30 10:52:55 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int n, int *count)
{
	char		c;

	if (n >= 10)
	{
		ft_put_unsigned(n / 10, count);
		ft_put_unsigned(n % 10, count);
	}
	else
	{
		c = n + '0';
		ft_putchar(c, count);
	}
}
