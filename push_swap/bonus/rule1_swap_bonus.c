/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule1_swap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:24 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:41 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->top < 1)
		return ;
	temp = stack->elts[stack->top];
	stack->elts[stack->top] = stack->elts[stack->top - 1];
	stack->elts[stack->top - 1] = temp;
}

void	sa(t_stack *stackA, int n)
{
	swap(stackA);
	if (n == 0)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stackB, int n)
{
	swap(stackB);
	if (n == 0)
		write(1, "sb\n", 3);
}

void	ss(t_stack *stackA, t_stack *stackB, int n)
{
	swap(stackA);
	swap(stackB);
	if (n == 0)
		write(1, "ss\n", 3);
}
