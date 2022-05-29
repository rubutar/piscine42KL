/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:38:13 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/27 11:04:06 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{	
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{	
	int i;
	int len;
	char temp;
	
	i = 0;
	len = ft_strlen(str) - 1;

	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return(str);
}
int	main ()
{
	printf("%s", ft_strrev("hello"));
}	
