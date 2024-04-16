/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule3_reverse_rotate_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:36 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:49 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	reverse_rotate(t_stack *stack)
{
	int	index;
	int	temp;

	index = 0;
	temp = stack->elts[index];
	++index;
	while (index < stack->top + 1)
	{
		stack->elts[index - 1] = stack->elts[index];
		index++;
	}
	stack->elts[index - 1] = temp;
}

void	rra(t_stack *stackA, int n)
{
	reverse_rotate(stackA);
	if (n == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stackB, int n)
{
	reverse_rotate(stackB);
	if (n == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *stackA, t_stack *stackB, int n)
{
	reverse_rotate(stackA);
	reverse_rotate(stackB);
	if (n == 0)
		write(1, "rrr\n", 4);
}
