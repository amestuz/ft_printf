/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uurbizu- <uurbizu-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:03:16 by uurbizu-          #+#    #+#             */
/*   Updated: 2023/07/05 17:36:24 by uurbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nr, char *base)
{
	int		nr_base[16];
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (nr == 0)
		len += ft_putchar('0');
	while (nr)
	{
		nr_base[i] = nr % 16;
		nr = nr / 16;
		i++;
	}
	while (--i >= 0)
		len += ft_putchar(base[nr_base[i]]);
	return (len);
}
