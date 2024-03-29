/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uurbizu- <uurbizu-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:57:07 by uurbizu-          #+#    #+#             */
/*   Updated: 2023/07/05 17:02:18 by uurbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(uintptr_t ptr)
{
	int	lenght;

	lenght = 0;
	lenght += write(1, "0x", 2);
	lenght += ft_print_hex((unsigned long)ptr, "0123456789abcdef");
	return (lenght);
}
