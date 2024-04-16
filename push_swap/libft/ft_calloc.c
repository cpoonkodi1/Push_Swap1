/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:47:45 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:47:59 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	if (number && size && number > (UINT_MAX / size))
		return (NULL);
	ptr = malloc(number * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, number * size);
	return (ptr);
}
