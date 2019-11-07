/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:27:41 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/07 17:05:10 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    int i;
    char *str;
    char *str2;
    
    str = (char *)src;
    str2 = (char *)dst;
    i = 0;
    while (i <= n)
    {
        str[i] = str2[i];
        if (c == str[i])
            return (dst);
        i++;
    }
    return (dst);
}