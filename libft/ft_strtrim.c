/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:17:34 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/21 18:58:50 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*dst;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			i = 0;
			start++;
			j++;
		}
		i++;
	}

}
