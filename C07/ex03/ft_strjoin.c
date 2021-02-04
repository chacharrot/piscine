/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:04:32 by scha              #+#    #+#             */
/*   Updated: 2020/11/05 01:48:15 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_sum(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		count;

	i = 1;
	count = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j++])
			count++;
		i++;
	}
	i = 0;
	j = 0;
	while (sep[i++])
		j++;
	j = j * (size - 1);
	return (count + j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		*dest = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * ft_sum(size, strs, sep) + 1);
	i = 0;
	while (i < size && strs[i])
	{
		ft_strcat(dest, strs[i]);
		if (size - i != 1)
			ft_strcat(dest, sep);
		i++;
	}
	dest[i] = '0';
	return (dest);
}
