/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:10:06 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/30 23:10:15 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return(str);
}

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	int	i = 0;
	int	mark = 1;	

	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(mark == 1)
			{
			str[i] -= 32;
			mark = 0;
			}
		
		}		

		else if (str[i] >= '0' && str[i] <= '9')
			mark = 0;
		
		else
			mark = 1;
	i++;
	}
	return (str);
}

int	main()
{
	char str[] = "SALUT, comment tu vas? 42mots quarante_deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
