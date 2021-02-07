/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:24:20 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/07 14:11:01 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == x && j == y))
		ft_putchar('A');
	else if ((i == x && j == 1) || (i == 1 && j == y))
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
				conditions(x, y, i, j);
				i++;
			}
			i = 1;
			ft_putchar('\n');
			j++;
		}
	}
}
