/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:56:22 by zvakil            #+#    #+#             */
/*   Updated: 2024/09/22 15:28:35 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (int ac, char **av)
{
	int			i;
	int			j;

	j = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; av[i] != NULL; i++)
	{
		while (av[i][j])
			std::cout << (char)toupper(av[i][j++]);
		j = 0;
	}
	std::cout << std::endl;
	return (0);
}
