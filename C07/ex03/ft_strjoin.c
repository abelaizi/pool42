/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:29:13 by albelaiz          #+#    #+#             */
/*   Updated: 2024/08/13 12:05:20 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size -1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*ptr;

	if (size == 0)
		return (malloc(1));
	i = 0;
	len = total_len(size, strs, sep);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i != size -1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
/*
#include<stdio.h>
int main(){
char *a[] ={ "alae","hhhhh",NULL};
printf("%s",ft_strjoin(2,a,", "));
return 0;
}*/
