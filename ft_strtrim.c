/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:17:34 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/29 17:27:26 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	len = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1] &&
				ft_strchr(set, s1[start + len - 1]) != NULL)
			len--;
	return (ft_substr(s1, start, len));
}
