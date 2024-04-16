/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:45:56 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:46:27 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	litsize;

	litsize = ft_strlen(little);
	if (!litsize)
		return ((char *)big);
	while (*big && litsize <= len--)
	{
		if (!ft_strncmp(big, little, litsize))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
