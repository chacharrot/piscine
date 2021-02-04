/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:43:47 by scha              #+#    #+#             */
/*   Updated: 2020/11/05 07:50:14 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(range = (int **)malloc(sizeof(int *) * len)))
		return (-1);
	i = 0;
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (len);
}
