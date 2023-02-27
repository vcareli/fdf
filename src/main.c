/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvieir <vinvieir@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:32:43 by vinvieir          #+#    #+#             */
/*   Updated: 2022/02/24 14:13:35 by vinvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

int vefify_param(char *parametro, int num_param)
{
    int value;

    value = 0;
    if (ft_strnstr(parametro, ".fdf", ft_strlen(parametro)) && num_param == 2)
        value = 1;
    return (value);
}

int main(int argc, char **argv)
{
    if (vefify_param(argv[1], argc))
        verify_fichier(argv[1]);
    else
        ft_putstr_fd("Error. Ex: fdf <maps.fdf>", 1);
    return (0);
}