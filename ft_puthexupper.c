/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihitonikoseki <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:19:08 by akihitonikose     #+#    #+#             */
/*   Updated: 2023/09/17 00:19:10 by akihitonikose    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexupper(n / 16);
	if (n % 16 < 10)
		count += ft_putchar(n % 16 + '0');
	else
		count += ft_putchar(n % 16 - 10 + 'A');
	return (count);
}
