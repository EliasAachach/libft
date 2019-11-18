/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:35:48 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/18 15:37:10 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = -1;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
		{
			i = j;
		}
		if (str[i] == '\0' && j >= 0)
			return (str + j);
	}
	return (NULL);
}
