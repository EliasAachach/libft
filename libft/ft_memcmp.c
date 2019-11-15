/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:50:27 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/15 15:34:48 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *str1;
    char *str2;
    size_t i;

    i = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    while(i <= n)
    {
        if (str1[i] < str2[i] || str1[i] > str2[i])
            return(str1[i] - str2[i]);
        i++;
    }
    return (0);
}