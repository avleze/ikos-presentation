#ifndef MATRIZ_H
#define MATRIZ_H

struct Matriz {
  double** datos;
  int filas;
  int columnas;
};
typedef struct Matriz Matriz;

Matriz* matriz_inicializar(int filas, int columnas);
double matriz_get_elto(Matriz* matriz, int fila, int columna);
void matriz_set_elto(Matriz* matriz, int fila, int columna, double valor);
void matriz_liberar(Matriz* matriz);

#endif // MATRIZ_H
