/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:34:06 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/12 14:36:49 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char *str;

    str = (char *)s;
    i = 0;
    while(str[i])
    {
        if (str[i] == c)
            return (str +i);
        i++;
    }
    return (NULL);
}