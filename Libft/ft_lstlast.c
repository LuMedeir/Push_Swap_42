/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:44:17 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/04 16:44:57 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		ret;
	t_list	*node;

	node = lst;
	if (node == 0)
		return (NULL);
	ret = ft_lstsize(lst) - 1;
	while (ret-- != 0)
	{
		node = node->next;
	}
	return (node);
}
