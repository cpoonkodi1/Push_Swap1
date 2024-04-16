/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:40:43 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:42:40 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	size_t	n;

	n = ft_strlen(s);
	str = (char *)s + n;
	ch = (char)c;
	while (n--)
	{
		if (*str == ch)
			return (str);
		str--;
	}
	if (*str == ch)
		return (str);
	return (NULL);
}
