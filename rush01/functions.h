/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruliu irmarqui minseoki <marvin@42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:55:43 by ruliu             #+#    #+#             */
/*   Updated: 2025/03/02 15:09:55 by ruliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	ft_putchar(char c);
void	grid_gen(int grid[4][4]);
void	print_grid(int grid[4][4]);
void	print_error(void);
int		is_valid(int grid[4][4], int row, int col, int val);
int		check_col_up(int grid[4][4], int col, int expected);
int		check_col_down(int grid[4][4], int col, int expected);
int		check_row_left(int grid[4][4], int row, int expected);
int		check_row_right(int grid[4][4], int row, int expected);
int		check_all_constraints(int grid[4][4], int constraints[16]);
int		solve(int grid[4][4], int constraints[16], int pos);
int		read_str(char *str, int constraints[16]);

#endif
