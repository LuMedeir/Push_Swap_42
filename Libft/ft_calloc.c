/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:45:18 by lumedeir          #+#    #+#             */
/*   Updated: 2023/08/31 11:40:10 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	totalsize = nmemb * size;
	if (totalsize != 0 && totalsize / size != nmemb)
		return (NULL);
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}
