/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:53:03 by myerturk          #+#    #+#             */
/*   Updated: 2023/06/18 20:53:19 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		root;

	root = 1;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	else
		return (0);
}
