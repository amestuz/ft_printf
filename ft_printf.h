/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uurbizu- <uurbizu-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:24:43 by uurbizu-          #+#    #+#             */
/*   Updated: 2023/07/06 18:42:01 by uurbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int	ft_printf(char const *format, ...);
int	ft_process(char format, va_list args);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_print_ptr(uintptr_t ptr);
int	ft_print_hex(unsigned long nr, char *base);
int	ft_putnbr(int n);
int	ft_print_unsigned(unsigned int num);

#endif