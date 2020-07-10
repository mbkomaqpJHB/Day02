/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:12:37 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/10 15:23:08 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	nb = 1;

	
	while (nb/10 > 0)
	{
		nb = nb*10;
		nb++;
	}
	ft_putchar(nb);
}

int	main()
{
	ft_putnbr(42);
}

