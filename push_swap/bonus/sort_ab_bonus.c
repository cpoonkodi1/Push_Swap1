/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ab_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:47 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:25:56 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	check_and_execute(t_stack *a, t_stack *b, char *line)
{
	if (ft_strcmp(line, "sa") == 0)
		sa(a, 1);
	else if (ft_strcmp(line, "sb") == 0)
		sb(b, 1);
	else if (ft_strcmp(line, "ss") == 0)
		ss(a, b, 1);
	else if (ft_strcmp(line, "pa") == 0)
		pa(a, b, 1);
	else if (ft_strcmp(line, "pb") == 0)
		pb(a, b, 1);
	else if (ft_strcmp(line, "ra") == 0)
		ra(a, 1);
	else if (ft_strcmp(line, "rb") == 0)
		rb(b, 1);
	else if (ft_strcmp(line, "rr") == 0)
		rr(a, b, 1);
	else if (ft_strcmp(line, "rra") == 0)
		rra(a, 1);
	else if (ft_strcmp(line, "rrb") == 0)
		rrb(b, 1);
	else if (ft_strcmp(line, "rrr") == 0)
		rrr(a, b, 1);
	else
		error_message(a, b);
}

void	checker(t_stack *a, t_stack *b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(STDIN_FILENO);
		if (line == NULL)
			break ;
		check_and_execute(a, b, line);
		free(line);
	}
	if (is_sorted(a) && b->top == -1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	sort_ab(t_stack *a, t_stack *b)
{
	if (is_sorted(a) == 1)
	{
		write(1, "OK\n", 3);
		return (0);
	}
	checker(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
