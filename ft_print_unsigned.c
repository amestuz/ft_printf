/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uurbizu- <uurbizu-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:35:04 by uurbizu-          #+#    #+#             */
/*   Updated: 2023/07/05 21:05:15 by uurbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	int	len;

	len = 0;
	if (num > 9)
		len += ft_print_unsigned(num / 10);
	len += ft_putchar(num % 10 + '0');
	return (len);
}
