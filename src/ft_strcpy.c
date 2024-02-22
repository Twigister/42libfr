/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:45:07 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/06 15:45:59 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*res;

	res = dest;
	while (!(((*(long long *)src) - 0x0101010101010101) & 0x8080808080808080))
		*((long long *)dest++) = *((long long *)src++);
	if (!(((*(int *)src) - 0x01010101) & 0x80808080))
		*((int *)dest++) = *((int *)src++);
	if (!((*(short *)src - 0x0101) & 0x8080))
		*((short *)dest++) = *((short *)src++);
	if (*src)
		*(dest++) = *src; 
	*dest = 0;
	return (res);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*res;

	i = 0;
	res = dest;
	while (*src && i < n)
	{
		*dest = *src;
		++i;
		++src;
		++dest;
	}
	while (i < n)
	{
		*dest = 0;
		++dest;
		++i;
	}
	return (res);
}
