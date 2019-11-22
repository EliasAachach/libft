/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:41:57 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/22 16:57:46 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	str = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	while (i < n)
	{
		str2[i] = str[i];
		i++;
	}
	return (dest);
}
