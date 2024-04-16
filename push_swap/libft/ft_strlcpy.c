/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:37:05 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:37:39 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!dstsize)
		return (i);
	while (--dstsize && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
