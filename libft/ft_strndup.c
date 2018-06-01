/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:37:55 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/01 16:24:32 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*tmp;

	if (!(tmp = ft_strnew(n)))
		return (NULL);
	ft_strncpy(tmp, s1, n);
	return (tmp);
}
