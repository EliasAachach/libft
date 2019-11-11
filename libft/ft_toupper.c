/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:12:48 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/11 18:06:37 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c += 32;
        return (c);
    }
    else
        return (c);
    
}