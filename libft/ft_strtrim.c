/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:17:34 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/22 14:01:12 by elaachac         ###   ########.fr       */
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
	unsigned int	start;
	size_t			dst_len;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	start = 0;
	dst_len = 0;
	while (set[i])
	{
		while (s1[j] == set[j])
		{
			i = 0;
			start++;
			j++;
		}
		i++;
	}
	dst_len = lenght(s1, set, start);
	return (ft_substr(s1, start, dst_len));
}
