/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:47:32 by tespandj          #+#    #+#             */
/*   Updated: 2024/09/12 22:54:49 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "philosophers.h"

void	philosophers(struct philo *p, char **argv, char *const *envp)
{
	everinit(p, argv, envp);
}

int	main(int argc, char **argv, char **envp)
{	
	struct philo	philo;

	if (argc != 5 && argc != 6)
		putstr("need ./philosophers + 4 || 5 args\n");
	else
	{
		philosophers(&philo, argv, envp);
		free(philo.data);
	}
	return (0);
}
