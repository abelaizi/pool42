/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:09:40 by albelaiz          #+#    #+#             */
/*   Updated: 2024/07/28 20:31:41 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cup;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		cup = tab[i];
		tab[i] = tab[j];
		tab[j] = cup;
		j--;
		i++;
	}
}
