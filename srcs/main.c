/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marc <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 18:51:18 by marc              #+#    #+#             */
/*   Updated: 2018/08/26 18:51:19 by marc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

static void	run(t_info *d, char **av, int ac)
{
	initialize(d, av, ac);
	if (d->f_p || !(d->nb_files || d->f_s))
		print_stdin(d, av[1]);
	print_args(d, av, ac);
}

int			main(int ac, char **av)
{
	t_info	d;

	if (ac == 1)
		return (kill(0));
	if (ft_strequ(av[1], "md5") || ft_strequ(av[1], "sha256")
		|| ft_strequ(av[1], "sha512"))
		run(&d, av, ac);
	else
		kill(av[1]);
	return (0);
}
