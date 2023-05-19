/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_deci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:56:14 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/19 17:04:05 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nb_deci_unsigned(unsigned int nb)
{
	long	n;
	int		ret;

	n = nb;
	ret = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n > 9)
		ret += ft_nb_deci(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}

int	ft_nb_deci(int nb)
{
	long	n;
	int		ret;

	n = nb;
	ret = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		n = -n;
		ret += write(1, "-", 1);
	}
	if (n > 9)
		ret += ft_nb_deci(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}