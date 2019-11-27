/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:17:34 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/27 16:08:47 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lenght(const char *s1, const char *set, unsigned int start)
{
	unsigned int i;
	unsigned int j;
	unsigned int end;
	unsigned int len;

	len = ft_strlen(s1);
	i = 0;
	end = 0;
	j = len;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			i = 0;
			end++;
			len--;
		}
		i++;
	}
	return (len - (start + end));
}

char	*ft_strtrim(const char *s1, const char *set)
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
		while (s1[start + len - 1] && ft_strchr(set, s1[start + len -1]) != NULL)
			len--;
		return (ft_substr(s1, start, len));
}
