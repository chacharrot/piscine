/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scha <scha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 04:49:14 by scha              #+#    #+#             */
/*   Updated: 2020/11/05 02:57:44 by scha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN(X)	 (X % 2 == 0)
# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"
# define TRUE 		1
# define FALSE 		0
# define SUCCESS 	0

typedef int			t_bool;

#endif
