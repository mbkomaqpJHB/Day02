/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:21:04 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/11 15:35:31 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		num;

	num = '0';
	while(num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
