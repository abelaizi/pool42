/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:03:47 by albelaiz          #+#    #+#             */
/*   Updated: 2024/08/13 10:32:55 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	 int	len;
	 int	i;
	 char *ptr;

	 len = ft_strlen(src);
	 i = 0;
	 ptr = (char*)(malloc(len + 1));
	if (ptr == NULL)
		return (NULL);

	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int main(){
	char a[] = "alae";
	char *dup = ft_strdup(a);
	if (dup != NULL){
	printf("%s",dup);
	free(dup);
	}
	return 0;
}*/
