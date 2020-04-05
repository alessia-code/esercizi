#include "es5_mat.h"
#include <stdio.h>
int main(int argc, char **argv) {
	printf("nel main\n");
	Mat* matrice;
	Mat* copia;
	//matrice=Mat_alloc(5, 5);
	matrice=Mat_read("mat_1.txt");
	printf("matrice iniziale\n");
	Mat_print(matrice);
	//Mat_is_symmetric(matrice);
	//Mat_normalize_rows(matrice);
	//printf("matrice normaalizzata\n");
	copia=Mat_clone(matrice);
	printf("matrice clonata\n");
	Mat_print(copia);

  return 0;
}
