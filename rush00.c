/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 08:34:45 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/07 13:45:36 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == x && j == 1) || (j == y && i == 1)
			|| (i == x && j == y))
		ft_putchar('o');
	else if ((j == 1 || j == y) && (i > 1 && i < x))
		ft_putchar('-');
	else if ((i == 1 || i == x) && (j > 1 && j < y))
		ft_putchar('|');
	else if ((i > 1 && i < x) && (j > 1 && j < y))
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
