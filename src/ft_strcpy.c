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
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
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
