/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:36:16 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/04 15:14:10 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int			i;
	int			j;

	i = -1;
	j = (int!ft_strlen(s1));
	while (*(s2 + ++i) && i < (int)n)
		*(s1 + j++) = *(s2 + i);
	*(s1 + j) = '\0';
	return (s1);
}*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1alt;
	size_t	i;

	s1alt = s1;
	i = 0;
	while (*s1alt != '\0')
		s1alt++;
	while (i != n && *s2 != '\0')
	{
		*s1alt = *s2;
		s1alt++;
		s2++;
		i++;
	}
	*s1alt = '\0';
	return (s1);
}
