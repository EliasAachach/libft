/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:35:48 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/25 14:01:06 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last_c;

	last_c = (0);
	str = (char *)s;
	while (*str)
	{
		if (*str == c)
		{
			last_c = str;
		}
		str++;
	}
	if (last_c)
		return (last_c);
	if (c == '\0')
		return (str);
	return (0);
}
