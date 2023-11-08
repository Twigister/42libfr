/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:57:55 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/06 14:40:46 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s && *s != (char)c)
		++s;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
