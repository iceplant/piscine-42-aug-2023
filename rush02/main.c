/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:16:08 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/26 13:54:05 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi.c"
#include <unistd.h>

int main(int argc, char **argv)
{
	char *num_str;
	char *dict;
	if (argc == 2)
	{
		num_str = argv[1];
		unsigned int n = ft_atoi(num_str);
		printf("atoi-ed number: %d\n", n);
		if (n < 0 || n > 4294967295)
			write(1, "Error\n", 6);
		//look up number en el diccionario del problema / check if it's valid given our dictionary
		//print number using dictionary (be sure to include "and" between hundred and 10s place, and - between 10 and 0s place)
		

		//printf("Solo un argumento: %s\n", num_str);
		// solo un argumento, lo buscamos en el archivo
	} else if (argc == 3)
	{
		num_str = argv[1];
		dict = argv[2];
	   	// same as above	
		printf("Dos argumentos: %s %s\n", num_str, dict);
	} else {
		// error de argumentos
		write(1, "Error\n", 6);
		printf("Otro numero de argumentos");
	}
}
