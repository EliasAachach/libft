/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:34:06 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/08 19:36:48 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    int j;
    char *str;

    str = (char *)s;
    i = 0;
    j = 0;
    while(str[i])
    {
        if (str[i] == c)
        {
            j = i;
        }
        if (j > 0 && str[i] == '\0')
            return (str);
        i++;
    }
    return (NULL);
}