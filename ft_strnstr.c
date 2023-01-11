/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:52:08 by aindiaz           #+#    #+#             */
/*   Updated: 2023/01/11 14:49:23 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
	{
		return ((char *)haystack);
	}
	while (*haystack && len--)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (!needle[++i])
			{
				return ((char *)haystack);
			}
			if (i > len)
			{
				return (0);
			}
		}
		haystack++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strnstr( "Hello world",  "wor", 11));
	return (0);
}*/
