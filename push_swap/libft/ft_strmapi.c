/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:53:59 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:54:18 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp_str;
	int		i;
	int		length;

	i = 0;
	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	tmp_str = malloc(length + 1);
	if (tmp_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp_str[i] = f(i, s[i]);
		i++;
	}
	tmp_str[i] = '\0';
	return (tmp_str);
}
