/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxperei <maxperei@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:46:19 by maxperei          #+#    #+#             */
/*   Updated: 2021/11/19 10:59:23 by maxperei         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *fmt, ...);
int		ft_search_type(va_list ap, const char *fmt);

int		ft_print_char(va_list ap);
int		ft_print_string(va_list ap);
int		ft_print_pointer(va_list ap);
int		ft_print_decimal(va_list ap);
int		ft_print_integer(va_list ap);
int		ft_print_unsigned(va_list ap);
int		ft_print_smallhex(va_list ap);
int		ft_print_bighex(va_list ap);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_nbrlen(int nbr);
int		ft_strlen(char *str);

#endif
