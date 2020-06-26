/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:14:10 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/26 15:37:21 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(int argc, char **argv){
	int i;
	i = 0;
	char *s;
	s = argv[0];
	while(s[i] != '\0'){
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
	return 0;
}


