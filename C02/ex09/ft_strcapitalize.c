/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:32:44 by scha              #+#    #+#             */
/*   Updated: 2020/10/22 05:23:54 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		a;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	a = 1;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		a++;
	}
	a = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z') &&
		(str[a - 1] > 'z' || str[a - 1] < 'a') &&
		(str[a - 1] > 'Z' || str[a - 1] < 'A') &&
		(str[a - 1] < '0' || str[a - 1] > '9'))
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
