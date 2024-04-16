/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:26:53 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:20 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int argc, char *argv[])
{
	int		arg_index;
	char	**args;

	arg_index = 0;
	if (argc < 2)
		exit(1);
	if (argc == 2)
	{
		capacity_checking(argv);
		args = ft_split(argv[1], ' ');
	}
	else
	{
		args = argv;
		arg_index = 1;
	}
	validate_args1(args, arg_index);
	do_sorting(argc, args, arg_index);
	return (0);
}
