/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:52 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/22 11:37:41 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	after_percent(va_list args, const char c)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar(va_arg(args, int));
	if (c == 's')
		ret += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		ret += ft_ptrhexa(va_arg(args, unsigned long));
	if (c == 'd' || c == 'i')
		ret += ft_nb_deci(va_arg(args, int));
	if (c == 'u')
		ret += ft_nb_deci_unsigned(va_arg(args, unsigned int));
	if (c == 'x')
		ret += ft_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		ret += ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		ret += ft_percent();
	return (ret);
}

int	ft_printf(const char *sentence, ...)
{
	int		i;
	int		ret;
	va_list	args;

	i = 0;
	ret = 0;
	va_start(args, sentence);
	while (sentence[i])
	{
		if (sentence[i] == '%' && sentence[i + 1])
		{
			ret += after_percent(args, sentence[i + 1]);
			i++;
		}
		else
		{
			write(1, &sentence[i], 1);
			ret++;
		}
		i++;
	}
	va_end(args);
	return (ret);
}
