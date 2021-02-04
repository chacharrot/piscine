/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 23:26:14 by scha              #+#    #+#             */
/*   Updated: 2020/10/22 06:20:37 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			a;
	char			b;
	unsigned char	c;
	char			*arr;

	arr = "0123456789abcdef";
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			c = *str;
			a = c / 16;
			b = c % 16;
			write(1, "\\", 1);
			write(1, (arr + a), 1);
			write(1, (arr + b), 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
