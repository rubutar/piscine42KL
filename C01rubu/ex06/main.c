/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:50:15 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/05/26 02:01:30 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
  //char	*c = "Hello how are you";
	printf("the length of the string is %d char", ft_strlen("hello how are you today"));
	return (0);
}
