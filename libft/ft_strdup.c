/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:16:51 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/18 15:24:15 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	if (!(s2 = ((char *)malloc(sizeof(char) * len + 1))))
		return (0);
	while (i <= len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
