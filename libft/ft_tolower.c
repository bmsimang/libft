/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:41:18 by bmsimang          #+#    #+#             */
/*   Updated: 2018/06/04 12:21:03 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <string.h>
//#include <stdlib.h>

//#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

/*int main(void)
{
    char str[] = "HelloWorld";

    // Now str is your own local buffer, that you can modify.
    // It is initialized with the text, but that text can be changed.
    ft_tolower(str);
    return 0;
}*/
