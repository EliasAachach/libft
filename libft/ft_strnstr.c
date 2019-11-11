/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:35:27 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/11 18:10:23 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int k;
    int j;

    i = 0;
    j = 0;
    k = 0;
    if(!(needle))
        return (haystack);
    while(i <= len)
    {
        k = i;
		while (haystack[k] == needle[j])
		{
			k++;
			j++;
			if (needle[j] == '\0')
				return (str + k - j);
		}
		k = 0;
		j = 0;
		i++;
    }
}