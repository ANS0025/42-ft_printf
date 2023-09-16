/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihitonikoseki <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:18:53 by akihitonikose     #+#    #+#             */
/*   Updated: 2023/09/17 00:18:55 by akihitonikose    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16);
	if (n % 16 < 10)
		count += ft_putchar(n % 16 + '0');
	else
		count += ft_putchar(n % 16 - 10 + 'a');
	return (count);
}
