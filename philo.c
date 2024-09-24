/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:47:32 by tespandj          #+#    #+#             */
/*   Updated: 2024/09/23 20:29:40 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "philo.h"

void	philosophers(struct philo *p)
{
	size_t		laps;
	int			i;
	// void			*rtval = NULL; si je veux recuperer la valeur de retour de surveil

	i = -1;
	laps = ttime();
	pthread_create(&p->thread, NULL, &surveil, (void *)p);
	while (++i < p->n_philo)
		pthread_create(&p->phl[i]->thread, NULL, &momeseno, (void *)p->phl[i]);
	pthread_join(p->thread, NULL);
	printf("\t\t%zu\n", ttime() - laps);
}

int	main(int argc, char **argv)
{	
	struct philo	p;

	if (argc != 5 && argc != 6)
		printf("need ./philo + 4 || 5 args\n");
	else
	{
		printf("oiadoizandoianz\n");
		everinit(&p, argv);
		if (p.situation)
			wgas(&p, p.situation);
		philosophers(&p);
		wgas(&p, 0);
	}
	return (0);
}
