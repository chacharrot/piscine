/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 03:37:28 by scha              #+#    #+#             */
/*   Updated: 2020/10/28 22:16:14 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		minus;
	int		result;

	i = 0;
	minus = 1;
	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
					|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * minus);
}
