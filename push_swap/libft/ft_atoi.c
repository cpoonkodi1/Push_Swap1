/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:46:43 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/08 10:47:24 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	res;
	long long int	check;
	int				sign;

	while ((*str && *str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	res = 0;
	while (*str && ft_isdigit(*str))
	{
		check = res;
		res = (res * 10) + sign * (*str - '0');
		if (res > check && sign < 0)
			return (0);
		if (res < check && sign > 0)
			return (-1);
		str++;
	}
	return (res);
}
