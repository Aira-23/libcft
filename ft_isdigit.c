/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:28:35 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/12 17:22:43 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main (void)
{
	int	c;

	c = '7';
	printf("%d", ft_isdigit(c));
	return (0);
}*/