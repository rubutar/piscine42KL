/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:31:25 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/31 16:00:18 by rbutarbu         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	if(ft_strlen(s1)

}

int	main()
{
	printf("%d", ft_strlen("test"));
}
