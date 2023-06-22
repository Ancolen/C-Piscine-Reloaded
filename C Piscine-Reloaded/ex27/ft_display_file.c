/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:25:39 by myerturk          #+#    #+#             */
/*   Updated: 2023/06/22 12:39:03 by myerturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	char	buffer[2];
	int		byte;
	int		fd;

	byte = 1;
	fd = open(file_name, O_RDONLY);
	while (byte != 0)
	{
		byte = read(fd, buffer, 1);
		if (byte == -1)
		{
			write (1, "Cannot read file.\n", 18);
			return ;
		}
		buffer[byte] = '\0';
		write (1, buffer, byte);
	}
	close (fd);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(av[1]);
	return (0);
}
