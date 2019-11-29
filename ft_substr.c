/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:53:53 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/29 16:22:39 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	i = 0;
	if (!s || !(s2 = (char *)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	if (ft_strlen(s) > start)
		while (len-- && i < ft_strlen(s))
			s2[i++] = s[start++];
	s2[i] = '\0';
	return (s2);
}
