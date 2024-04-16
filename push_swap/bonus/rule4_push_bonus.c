/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule4_push_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:41 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:52 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	push(t_stack *stack, int value)
{
	stack->elts[++stack->top] = value;
}

int	pop(t_stack *stack)
{
	return (stack->elts[stack->top--]);
}

void	pa(t_stack *stackA, t_stack *stackB, int n)
{
	if (stackB->top >= 0)
		push(stackA, pop(stackB));
	if (n == 0)
		write(1, "pa\n", 3);
}

void	pb(t_stack *stackA, t_stack *stackB, int n)
{
	if (stackA->top >= 0)
		push(stackB, pop(stackA));
	if (n == 0)
		write(1, "pb\n", 3);
}
