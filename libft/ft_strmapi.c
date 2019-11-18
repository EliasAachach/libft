/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:10:54 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/18 17:15:41 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen((const char *)str);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i <= len)
	{
		str[i] = f(len, s[i]);
		i++;
	}
	return (str);
}
