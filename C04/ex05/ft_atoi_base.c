/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:21:38 by scha              #+#    #+#             */
/*   Updated: 2020/11/01 14:58:47 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		diffstrbase(char str, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (0);
}

int		atoi(char *str, int baselen, char *base)
{
	int		i;
	int		minus;
	int		result;

	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	result = 0;
	while (diffstrbase(str[i], base))
		result = result * baselen + diffstrbase(str[i++], base);
	return (result * minus);
}

int		ft_baselen(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
			base[i] == '\n' || base[i] == '\t' || base[i] == '\v' ||
			base[i] == '\f' || base[i] == '\r')
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

int		ft_atoi_base(char *str, char *base)
{
	int		baselen;
	int		result;

	baselen = ft_baselen(base);
	if (baselen == 0)
		return (0);
	result = atoi(str, baselen, base);
	return (result);
}
