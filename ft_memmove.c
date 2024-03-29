/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:02:06 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/25 12:38:17 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*s1;
	unsigned char	*s2;

	if (dst == NULL && src == NULL)
		return (NULL);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = 0;
	j = 0;
	if (s2 < s1)
		while (++i <= len)
			s1[len - i] = s2[len - i];
	else
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dst);
}
