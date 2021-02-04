/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 03:47:37 by scha              #+#    #+#             */
/*   Updated: 2020/10/21 17:55:09 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		a;
	int		b;

	count = 0;
	while (count < size / 2)
	{
		a = *(tab + count);
		b = *(tab + size - 1 - count);
		*(tab + size - 1 - count) = a;
		*(tab + count) = b;
		count++;
	}
}
