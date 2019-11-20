// Programa para multiplicar dos matrices.
#include "matriz.h"
#include <stdio.h>

Matriz* multiplicarMatrices(Matriz* matriz1, Matriz* matriz2)
{
  Matriz* resultado = matriz_inicializar(matriz1->filas, matriz2->columnas);
  for(int i = 0; i < resultado->filas; ++i)
    for(int j = 0; j < resultado->columnas; ++j)     
      {
	double suma = 0;
	for(int k = 0; j < matriz1->columnas; ++k)
	  suma += matriz1->datos[i][k] * matriz2->datos[k][j];
	resultado->datos[i][j] = suma;
      }
  return resultado;
}



void imprimirMatriz(Matriz* matriz)
{
  for(int i = 0; i < matriz->filas; ++i)
    { 
      for(int j = 0; j < matriz->columnas; ++j)
	printf("%G\t\t", matriz_get_elto(matriz, i, j));
      printf("\n");
    }

}

int main(int argc, char** argv)
{
  Matriz* matriz1 = matriz_inicializar(2, 2);

  matriz_set_elto(matriz1, 0, 0, 2.13);
  matriz_set_elto(matriz1, 0, 1, 1.13);
  matriz_set_elto(matriz1, 1, 0, 2.53);
  matriz_set_elto(matriz1, 1, 1, 1.83);

  imprimirMatriz(matriz1);

  Matriz* matriz2 = matriz_inicializar(2, 2);

  matriz_set_elto(matriz2, 0, 0, 1);
  matriz_set_elto(matriz2, 0, 1, 0);
  matriz_set_elto(matriz2, 1, 0, 0);
  matriz_set_elto(matriz2, 1, 1, 1);

  printf("\n\n");
  imprimirMatriz(matriz2);

  
  Matriz* resultado = multiplicarMatrices(matriz1, matriz2);

  printf("\n\n");
  imprimirMatriz(resultado);
  
  matriz_liberar(matriz1);
  matriz_liberar(matriz2);
  matriz_liberar(resultado);
}
