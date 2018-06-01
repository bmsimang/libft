/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:09:20 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/01 16:16:25 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <unistd.h>


int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main()
{
	int	c;
	c = ft_isascii('}');
	printf ("%d", c);
	return (0);
}
