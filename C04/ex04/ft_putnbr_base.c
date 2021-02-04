/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:14:26 by scha              #+#    #+#             */
/*   Updated: 2020/10/29 06:33:27 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_baselen(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				index;
	int				baselen;
	unsigned int	nbr2;
	char			number[100];

	baselen = ft_baselen(base);
	if (nbr < 0 && baselen > 0)
	{
		write(1, "-", 1);
		nbr2 = nbr * -1;
	}
	else
		nbr2 = nbr;
	if (nbr2 == 0 && baselen > 0)
		write(1, &base[0], 1);
	index = 0;
	while (nbr2 != 0 && baselen > 0)
	{
		number[index] = base[nbr2 % baselen];
		nbr2 = nbr2 / baselen;
		index++;
	}
	while (index > 0 && baselen > 0)
		write(1, &number[--index], 1);
}
