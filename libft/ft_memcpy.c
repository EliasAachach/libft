/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:41:57 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/04 17:09:12 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    i = 0;

    while(i <= n)
    {
        (char *)src[i] = (char *)dest[i];
        i++;
    }
    return (dest);
}