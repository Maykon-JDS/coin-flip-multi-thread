// Usando o OpenMP para executar o Hello World compartilhado
// utilizando a linguagem C

// OpenMP header
#include <omp.h>

#include <stdio.h>
#include <stdlib.h>
#include <string>

int main(int argc, char *argv[])
{

	omp_set_num_threads(2);

	std::string moeda;

	#pragma omp parallel
	{

		if (omp_get_thread_num() == 0)
		{
			moeda = "par";
		}
		else
		{
			moeda = "impar";
		}
	}

	printf("resultado = %s\n", moeda.c_str());
}