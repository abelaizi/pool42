/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:23:58 by albelaiz          #+#    #+#             */
/*   Updated: 2024/08/13 10:36:25 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	range = (int *)(malloc(size * sizeof(int)));
	if (range == NULL)
		return (NULL);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
