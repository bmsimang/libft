/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:05:21 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/04 12:06:48 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*temp;
	size_t	i;

	i = 0;
	if (!(temp = malloc(sizeof(*temp) * (size + 1))))
		return (NULL);
	if (temp)
	{
		while (i <= size)
		{
			temp[i] = '\0';
			i++;
		}
	}
	return (temp);
}
