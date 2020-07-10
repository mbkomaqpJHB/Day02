/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:14:22 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/10 12:31:56 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int zer0;
	int on1;
	int tw2;

	zer0 = '0';
	while ( zer0 <= '7')
	{
		on1 = zer0 + 1;
		while ( on1 <= '8')
		{
			tw2 = on1 + 1;
			while ( tw2 <= '9')
			{
				ft_putchar(zer0);
				ft_putchar(on1);
				ft_putchar(tw2);
				
				if ( zer0 != '7' || on1 != '8' || tw2 != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tw2++;
			}
			on1++;
		}
		zer0++;
	}
}
