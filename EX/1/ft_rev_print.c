/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:10:27 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/27 08:24:17 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen (char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);

}

int	main()
{
	char str[] = "123456789";
	ft_rev_print(str);	
	

	//printf("kalo dibalik jadi %d", ft_rev_print("hello"));
}
