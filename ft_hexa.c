/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:08:23 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/19 17:19:17 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_ptrhexa(unsigned long long ptr)
{
	int ret;	
	ret = 0;

	if (!ptr)
	{
		ret += write(1, "(nil)", 5);
		return (ret);
	}
	ret += write(1, "0x", 2);
	ret += ft_hexa(ptr, "0123456789abcdef");
	return (ret);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_hexa(unsigned int nb, char *base)
{
	long	n;
	int		ret;

	n = nb;
	ret = 0;
	if (n <= ft_strlen(base))
		ret += ft_putchar(base[n]);
	if (n > ft_strlen(base))
	{
		ret += ft_hexa(n / ft_strlen(base), base);
		ret += ft_hexa(n % ft_strlen(base), base);
	}
	return (ret);
}