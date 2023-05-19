/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:27:05 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/19 10:03:18 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	ret;

	ret = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[ret])
	{
		write(1, &str[ret], 1);
		ret++;	
	}
	return (ret);
}