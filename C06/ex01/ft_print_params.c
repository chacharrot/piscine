/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:38:27 by scha              #+#    #+#             */
/*   Updated: 2020/11/01 20:06:07 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (++index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
	}
	return (0);
}
