/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:12:47 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/18 15:43:52 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s)
{
	int		i;
	int		len;
	char	*s2;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]) == 1)
			len++;
		i++;
	}
	i = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (s[i])
	{
		if (ft_isalpha(s[i]) == 1)
		{
			s2[i] = s[i];
		}
		i++;
	}
	return (s2);
}
