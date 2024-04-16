/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:28:09 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 11:08:02 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	validate_args1(char **args, int arg_index)
{
	while (args[arg_index] != NULL)
	{
		is_numeric_string(args[arg_index]);
		check_overflow(args[arg_index]);
		is_duplicate(args);
		arg_index++;
	}
	return (0);
}

int	is_duplicate(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
			{
				write(0, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_overflow(char *string)
{
	long long	num;

	num = ft_atol(string);
	if (num < INT_MIN || num > INT_MAX)
	{
		write(0, "Error\n", 6);
		exit(1);
	}
	return (0);
}

int	is_numeric_string(const char *string)
{
	int	i;

	i = 0;
	if (string[i] == '-' || string[i] == '+')
		i++;
	if (string[i] == '\0')
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (string[i] != '\0')
	{
		if (string[i] < '0' || string[i] > '9')
		{
			write(0, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (0);
}
