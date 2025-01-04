/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidsaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 10:41:00 by hidsaid           #+#    #+#             */
/*   Updated: 2024/12/05 21:53:17 by hidsaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	handle_format(char c, va_list args, int *count);
int		ft_putstr(char *str);
void	ft_putnbr(int n, int *count);
void	ft_put_unsigned(unsigned int n, int *count);
int		print_hex_uppercase(unsigned long n);
int		print_hex_lowercase(unsigned long n);
int		hex_pointer(void *p);
void	ft_putchar(char c, int *count);

#endif
