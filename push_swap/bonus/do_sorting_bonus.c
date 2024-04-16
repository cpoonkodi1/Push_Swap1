/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sorting_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:12 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:34 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	do_sorting(int argc, char **args, int argIndex)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		capacity;
	int		i;

	capacity = 0;
	if (argc == 2)
	{
		i = 0;
		while (args[capacity] != '\0')
			capacity++;
	}
	else
		capacity = argc - 1;
	initialize_stack(&stack_a, capacity);
	initialize_stack(&stack_b, capacity);
	move_args_to_stack(capacity, argIndex, args, &stack_a);
	if (argc == 2)
		free_args(args);
	sort_ab(&stack_a, &stack_b);
	return (0);
}

void	initialize_stack(t_stack *stack, int capacity)
{
	stack->elts = (int *)malloc(sizeof(int) * capacity);
	stack->top = -1;
	stack->capacity = capacity;
}

void	free_stack(t_stack *stack)
{
	free(stack->elts);
	stack->elts = NULL;
	stack->top = -1;
	stack->capacity = 0;
}

void	move_args_to_stack(int c, int argIndex, char *argv[], t_stack *stack)
{
	if (argIndex == 0)
	{
		c = c -1;
		while (c >= 0)
		{
			push(stack, ft_atol(argv[c]));
			--c;
		}
	}
	else
	{
		while (c != 0)
		{
			push(stack, ft_atol(argv[c]));
			--c;
		}
	}
}
