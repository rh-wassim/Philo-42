/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrhilane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:38:51 by wrhilane          #+#    #+#             */
/*   Updated: 2023/03/20 22:38:59 by wrhilane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_p		p;

	if (!(ft_args(argc, argv, &p)))
		return (ft_exit("Invalid args\n"));
	p.ph = malloc(sizeof(t_philo) * p.a.total);
	if (!p.ph)
		return (ft_exit("Malloc = NULL \n"));
	if (!ft_init(&p) || !ft_threads(&p))
	{
		free(p.ph);
		return (0);
	}
	stop(&p);
}
