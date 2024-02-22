/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:42 by arlarzil          #+#    #+#             */
/*   Updated: 2024/02/19 14:59:48 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void		*res;

	if (!dest && !src)
		return (0);
	res = dest;
	while (n >= 8)
	{
		(*(long long *)res++) = (*(long long *)src++);
		n -= 8;
	}
	if (n & 4)
		*((int *)dest++) = *((int *)src++);
	if (n & 2)
		*((short *)dest++) = *((short *)src++);
	if (n & 1)
		*((char *)dest) = *((char *)src);
	return (dest);
}

void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	void		*res;

	if (!dest && !src)
		return (0);
	res = dest;
	while (n >= 8)
	{
		(*(long long *)res--) = (*(long long *)src--);
		n -= 8;
	}
	if (n & 4)
		*((int *)dest--) = *((int *)src--);
	if (n & 2)
		*((short *)dest--) = *((short *)src--);
	if (n & 1)
		*((char *)dest) = *((char *)src);
	return (dest);
}
