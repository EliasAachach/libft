/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:09:11 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/06 12:06:00 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int i;
    int neg;
    int nb;

    i = 0;
    nb = 0;
    neg = 1;
    while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        i++;
        neg = -1;
    }
    while (ft_isdigit(str[i]) == 1)
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}