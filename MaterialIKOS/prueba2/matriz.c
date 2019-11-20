#include "matriz.h"
#include <stdlib.h>


Matriz* matriz_inicializar(int filas, int columnas)
{
  Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
  
  matriz->filas = filas;
  matriz->columnas = columnas;
  matriz->datos = (double**) malloc(filas * sizeof(double*));

  for(int fila = 0; fila < filas; ++fila)
    matriz->datos[fila] = (double*) malloc(columnas * sizeof(double));

  return matriz;
}

double matriz_get_elto(Matriz* matriz, int fila, int columna)
{
  return matriz->datos[fila][columna];
}

void matriz_set_elto(Matriz* matriz, int fila, int columna, double valor)
{
  matriz->datos[fila][columna] = valor;
}

void matriz_liberar(Matriz* matriz)
{
  for(int fila = 0; fila < matriz->filas; ++fila)
    free(matriz->datos[fila]);

  free(matriz->datos);
  free(matriz);
}
