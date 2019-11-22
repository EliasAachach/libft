/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:07:08 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/22 14:37:22 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*tab;
	int		i;

	i = 0;
	if (count == 0 || size == 0)
		return (0);
	if (!(tab = ((size_t *)malloc(sizeof(size) * (count + 1)))))
	{
		tab[0] = '\0';
		return (tab);
	}
	return ((void *)tab);
}
