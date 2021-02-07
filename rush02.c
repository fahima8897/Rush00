/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:26:09 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/07 14:02:20 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	condition(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == x && j == 1))
		ft_putchar('A');
	else if ((i == 1 && j == y) || (i == x && j == y))
		ft_putchar('C');
	else if ((i == 1 || j == 1 || i == x || j == y)
			&& ((i > 1 && i < x) || (j > 1 && j < y)))
		ft_putchar('B');
	else if (i > 1 && i < x && j > 1 && j < y)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			while (i <= x)
			{
				condition(i, j, x, y);
				i++;
			}
			i = 1;
			ft_putchar('\n');
			j++;
		}
	}
}
