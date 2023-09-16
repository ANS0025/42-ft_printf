/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihitonikoseki <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:18:26 by akihitonikose     #+#    #+#             */
/*   Updated: 2023/09/17 00:18:27 by akihitonikose    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_parse(char c, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr(void *ptr);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n);
int	ft_puthexupper(unsigned int n);

#endif
