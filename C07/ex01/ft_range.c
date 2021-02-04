/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:41:44 by scha              #+#    #+#             */
/*   Updated: 2020/11/05 00:36:24 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	len;
	int		i;
	int		*range;

	if (min >= max)
		return (0);
	len = max - min;
	if (!(range = (int *)malloc(sizeof(int) * (len + 1))))
		return (range);
	i = 0;
	while (i <= len)
	{
		range[i] = min + i;
		i++;
	}
	range[i] = 0;
	return (range);
}
