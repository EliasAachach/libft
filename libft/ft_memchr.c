/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:06:01 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/08 19:09:32 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    size_t i;
   
    str = (char *)s;
    i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return (s - i);
        i++;
    }
    return(NULL);
}