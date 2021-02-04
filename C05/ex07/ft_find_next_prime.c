/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:25:28 by scha              #+#    #+#             */
/*   Updated: 2020/11/02 15:37:18 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 1)
		return (0);
	i = 2;
	while (i <= 46340 && i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}
