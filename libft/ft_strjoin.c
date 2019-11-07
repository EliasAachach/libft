/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:11:48 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/07 11:06:01 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs)
{
	int		i;
	char	*dest;

	dest = 0;
	i = 0;
	if (!(dest = ((char *)malloc(sizeof(char) * (size + 1)))))
		return (NULL);
	if (size <= 0)
		dest = '\0';
	while (i < size)
	{
		dest = ft_strcat(strs[i],strcat[i + 1]);
		i++;
	}
	return (dest);
}