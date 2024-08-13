/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-haou <ml-haou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:31:47 by ml-haou           #+#    #+#             */
/*   Updated: 2024/07/28 18:31:52 by ml-haou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 && (j == 1 || j == y))
				ft_putchar('A');
			else if (i == x && (j == 1 || j == y))
				ft_putchar('C');
			else if (j == 1 || i == 1 || j == y || i == x)
				ft_putchar('B');
			else 
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
