/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:41:22 by myerturk          #+#    #+#             */
/*   Updated: 2023/06/18 20:42:04 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		r;

	r = nb;
	if (r < 0 || r > 15)
		return (0);
	else if (r == 0 || r == 1)
		return (1);
	else
	{
		while (r > 1)
		{
			r--;
			nb *= r;
		}
	}
	return (nb);
}
