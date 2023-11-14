/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlarzil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:24:20 by arlarzil          #+#    #+#             */
/*   Updated: 2023/11/08 19:54:12 by arlarzil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst)
	{
		ft_lstclear(&((*lst)->next), del);
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
