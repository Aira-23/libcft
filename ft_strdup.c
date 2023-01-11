/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:20:23 by aindiaz           #+#    #+#             */
/*   Updated: 2023/01/11 15:08:25 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	int		count;
	int		i;

	i = 0;
	count = (ft_strlen(s1) + 1);
	ptr = malloc(count);
	if (ptr != NULL)
	{
		ft_strlcpy (ptr, s1, 200);
	}
	return (ptr);
}
