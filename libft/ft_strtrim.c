/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:12:47 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/19 15:26:21 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*src;
	int i;
	int j;
	int len;

	len = 0;	
	i = 0;
	j = 0;
	src = (char *)s1;
	while (src[i])
	{
		while(src[i] == set[j])
		{
			i++;
			j++;
			len++;
			if(set[j] == '\n')
		}
	}
}
