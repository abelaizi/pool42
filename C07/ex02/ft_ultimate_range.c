/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:30:45 by albelaiz          #+#    #+#             */
/*   Updated: 2024/08/13 10:41:14 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int *)(malloc(size * sizeof(int)));
	if (tab == NULL)
		return (-1);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
/*
int main(){
    int i = 0;
    int min = 5;
    int max = 10;
    int *tab;
    int size = ft_ultimate_range(&tab, min, max);
    printf("%d\n",size);
    while(i < size){
        printf("%d ", tab[i]);
        i++;
    }
    free(tab);
    return 0;
}
*/
