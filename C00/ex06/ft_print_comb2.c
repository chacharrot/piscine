/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:47:37 by scha              #+#    #+#             */
/*   Updated: 2020/10/26 17:14:32 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writecomb(char *arr, int e)
{
	while (e < 101)
	{
		arr[2] = e / 10 + '0';
		arr[3] = e % 10 + '0';
		if (e < 100)
		{
			write(1, &arr[0], 1);
			write(1, &arr[1], 1);
			write(1, " ", 1);
			write(1, &arr[2], 1);
			write(1, &arr[3], 1);
			write(1, ", ", 2);
			e++;
		}
		else if (e == 100)
			break ;
	}
}

void	ft_print_comb2(void)
{
	char	arr[5];
	int		e;

	e = 0;
	while (e < 98)
	{
		arr[0] = e / 10 + '0';
		arr[1] = e % 10 + '0';
		e++;
		writecomb(arr, e);
	}
	write(1, "98 99", 5);
}
