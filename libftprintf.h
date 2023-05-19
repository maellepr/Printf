/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:19:03 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/19 17:35:12 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF
# define LIBFTPRINTF

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *sentence, ...);
int	ft_nb_deci(int nb);
int ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_hexa(unsigned int nb, char *base);
int	ft_ptrhexa(unsigned long long ptr);
int	ft_nb_deci_unsigned(unsigned int nb);
int	ft_percent();

# endif