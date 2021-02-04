/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:42:30 by scha              #+#    #+#             */
/*   Updated: 2020/11/04 23:49:10 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

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

void	ft_show_tab(struct s_stock_str *arr)
{
	int		i;

	i = 0;
	while (arr[i].str != 0)
	{
		ft_putstr(arr[i].str);
		ft_putchar('\n');
		ft_putnbr(arr[i].size);
		ft_putchar('\n');
		ft_putstr(arr[i].copy);
		ft_putchar('\n');
		i++;
	}
}
