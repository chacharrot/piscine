/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:04:25 by scha              #+#    #+#             */
/*   Updated: 2020/11/01 20:16:57 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			arr[11];
	char			*base;
	int				count;
	long int		nb2;

	if (nb == 0)
		write(1, "0", 1);
	nb2 = nb;
	base = "0123456789";
	if (nb < 0)
	{
		nb2 = nb2 * -1;
		write(1, "-", 1);
	}
	count = 0;
	while (nb2 > 0)
	{
		arr[count] = base[nb2 % 10];
		nb2 = nb2 / 10;
		count++;
	}
	while (count > 0)
		write(1, &arr[--count], 1);
}
