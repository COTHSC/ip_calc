/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ip_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:56:40 by jescully          #+#    #+#             */
/*   Updated: 2021/02/02 16:22:10 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

int		values(char *str)
{
	int i = 0;
	int f;
	int s;
	int t;
	int q;
	 
	f = ft_atoi(str);
	while(ft_isdigit(str[i]))
			i++;
	s = ft_atoi(&str[++i]);
	while(ft_isdigit(str[i]))
			i++;
	t = ft_atoi(&str[++i]);
	while(ft_isdigit(str[i]))
			i++;
	q = ft_atoi(&str[++i]);
	while(ft_isdigit(str[i]))
			i++;
	printf("this is f1 %i \n", f);
	printf("this is s1 %i \n", s);
	printf("this is t1 %i \n", t);
	printf("this is q1 %i \n", q);
	return f;
}


int main(int argc, char **argv)
{
	int number;
	int i;
	char *str1;

	i = 0;
	if(!(str1 = (char *)malloc(ft_strlen(argv[1] + 1))))
		return 0;
	while (argv[1][i]) 
	{
		str1[i] = argv[1][i];
		i++;
	}
	values(str1);

	printf("this is str1 %s \n", str1);
	return 0;
}
