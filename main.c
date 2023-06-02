/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:04:35 by mapoirie          #+#    #+#             */
/*   Updated: 2023/05/22 14:23:06 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// char	c = 'A';
	// char	*str = NULL;
	// char	*str2 = "h";
	// char	*str3 = "salut ca va bienvenue";
	// void	*ptr;
	// int		nb = 0;
	// ptr = str3;
	double i = 4.2;
	
	printf("\n--- fonction de base ---\n\n");
	printf("valeur de retour : %d\n", printf("test 4 : %d", (int)4.2));
	ft_printf("\n\n----- ma fonction -----\n\n");
	ft_printf("valeur de retour : %d ", ft_printf("test 4 : %d", (int)i));
}
