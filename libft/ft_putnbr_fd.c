/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:27:33 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/14 17:18:20 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar (char c, int fd)
{
    write(fd, &c, 1);
}
void    ft_putnbr_fd(int n, int fd)
{
    unsigned int nbr;
    nbr = n;
    if (n < 0)
    {
        ft_putchar('-', fd);
        nbr = -n;
    }
    if (nbr >= 10)
        ft_putnbr_fd(nbr / 10, fd);
    ft_putchar(nbr % 10 + '0', fd);
}