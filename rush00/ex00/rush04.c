/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:14:53 by imoran            #+#    #+#             */
/*   Updated: 2016/10/30 18:49:23 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_abc(int x)
{
	ft_putchar('A');
	while ((x - 2) > 0)
	{
		ft_putchar('B');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_b(int x)
{
	ft_putchar('B');
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	print_cba(int x)
{
	ft_putchar('C');
	while ((x - 2) > 0)
	{
		ft_putchar('B');
		x--;
	}
	if (x != 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(2, "Error: Arguments cannot be negative\n", 36);
		return ;
	}
	if (x == 0 || y == 0)
	{
		return ;
	}
	print_abc(x);
	while ((y - 2) > 0)
	{
		print_b(x);
		y--;
	}
	if (y != 1)
	{
		print_cba(x);
	}
}
