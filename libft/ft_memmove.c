/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:02:06 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/18 17:05:57 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = -1;
	j = 0;
	if (dst < src)
	{
		i = len;
		while (i >= 0)
		{
			s1[i] = s2[j];
			i--;
			j++;
		}
		return (dst);
	}
	while (++i <= len)
		s1[i] = s2[i];
	return (dst);
}
