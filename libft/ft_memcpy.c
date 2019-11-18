/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:41:57 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/18 17:03:59 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	i = 0;
	str = (char *)src;
	str2 = (char *)dest;
	while (i <= n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dest);
}
