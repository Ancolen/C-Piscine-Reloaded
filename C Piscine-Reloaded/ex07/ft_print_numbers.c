/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:35:54 by myerturk          #+#    #+#             */
/*   Updated: 2023/06/18 20:36:05 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char h);

void	ft_print_numbers(void)
{
	int		i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
