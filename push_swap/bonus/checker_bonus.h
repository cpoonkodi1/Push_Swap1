/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:27:02 by pchennia          #+#    #+#             */
/*   Updated: 2024/02/29 10:23:31 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include "../push_swap.h"

int		validate_args1(char **args, int arg_index);
int		is_numeric_string(const char *string);
int		check_overflow(char *string);
int		is_duplicate(char *argv[]);
void	error_message(t_stack *a, t_stack *b);

int		do_sorting(int argc, char **args, int argIndex);
void	move_args_to_stack(int c, int argIndex, char *argv[], t_stack *stack);
void	free_stack(t_stack *stack);
void	initialize_stack(t_stack *stack, int capacity);

int		sort_ab(t_stack *a, t_stack *b);
void	checker(t_stack *a, t_stack *b);
void	check_and_execute(t_stack *a, t_stack *b, char *line);
int		ft_strcmp(const char *s1, const char *s2);

char	*get_next_line(int fd);
char	*free_buffer(char *str_buffer);

// Rules
// 1. Swap
void	sa(t_stack *stackA, int n);
void	sb(t_stack *stackB, int n);
void	ss(t_stack *stackA, t_stack *stackB, int n);
void	swap(t_stack *stack);

// 2. Rotate
void	ra(t_stack *stackA, int n);
void	rb(t_stack *stackB, int n);
void	rr(t_stack *stackA, t_stack *stackB, int n);
void	rotate(t_stack *stack);

// 3. Reverse rotate
void	rra(t_stack *stackA, int n);
void	rrb(t_stack *stackB, int n);
void	rrr(t_stack *stackA, t_stack *stackB, int n);
void	reverse_rotate(t_stack *stack);

// 4. Push to another stack
void	pa(t_stack *stackA, t_stack *stackB, int n);
void	pb(t_stack *stackA, t_stack *stackB, int n);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);

#endif
