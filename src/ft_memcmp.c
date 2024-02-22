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
	while (i < n << 3)
	{
		if ((*(const long long *)s1) != *((const long long *)s2))
			break ;
		i += 8;
		(const long long *)s1++;
		(const long long *)s2++;
	}
	while (i + 1 < n)
	{
		if (*((const char *)s1) != *((const char *)s2))
			break ;
		++i;
		++s1;
		++s2;
	}
	if (i != n)
		return (*((const unsigned char *)s1) - \
			*((const unsigned char *)s2));
	return (0);
}
