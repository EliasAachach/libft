/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:53:53 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/26 18:00:10 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) + start;
	if (size < len)
		len = size;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	i = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
