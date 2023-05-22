/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:15:54 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/22 10:27:06 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(const char *sentence, ...);
int	ft_nb_deci(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_hexa(unsigned long nb, char *base);
int	ft_ptrhexa(unsigned long long ptr);
int	ft_nb_deci_unsigned(unsigned int nb);
int	ft_percent(void);

#endif