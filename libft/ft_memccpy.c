/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:27:41 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/05 15:22:45 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    int i;
    i = 0;

    while (i <= n)
    {
        if (c == (char *)src[i])
            return (dst);
        (char *)src[i] = (char *)dst[i];
        i++;
    }
    return (dst);
}