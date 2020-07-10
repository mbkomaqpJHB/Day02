/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:09:57 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/10 11:20:08 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)

void	ft_print_reverse_alphabet(void)
{
	char alpha;
	alpha = 'z';

	while (alpha >= 'a')
	{
		ft_putchar(alpha);
		alpha--;
	}
}
