/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 06:00:39 by scha              #+#    #+#             */
/*   Updated: 2020/10/20 07:06:00 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				c = tab[b];
				d = tab[b + 1];
				tab[b] = d;
				tab[b + 1] = c;
			}
			b++;
		}
		a++;
	}
}
