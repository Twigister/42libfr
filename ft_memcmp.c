/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:42:32 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 23:20:27 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i + 1 < n)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			break ;
		++i;
	}
	if (i != n)
		return (((const unsigned char *)s1)[i] - \
			((const unsigned char *)s2)[i]);
	return (0);
}
