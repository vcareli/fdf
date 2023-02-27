/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/02/25 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

void	verify_fichier(char *argument)
{
	int		fichier;
	//char	*chiffre;

	fichier = open(argument, O_RDONLY);
	if (!fichier || fichier < 0)
	{
		ft_putstr_fd("Error in map.", 1);
		exit (1);
	}
	get_next_line(fichier);
}
