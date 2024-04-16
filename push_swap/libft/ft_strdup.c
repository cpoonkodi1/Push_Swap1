/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:48:23 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:48:46 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(src) + 1;
	dup = (char *)malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, src, len);
	return (dup);
}
