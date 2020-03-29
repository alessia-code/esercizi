#include <stdio.h>
#include <stdlib.h>

void inizializzaArrayRandom(double v[], int dim, double max_value);
void vec_print(double v[], int dim);
void vec_scale(double v[], int dim, double scale);

double vec_dot(double src1[], double src2[], int dim);

double* vec_clone(double v[], int dim);

bool vec_positive_check(double v[], int dim);

int main(int argc, char **argv) {
  int dim1 = 10;
  double max_value = 10;
printf("Alloco il vettore v3...\n");
int dim3=5;
double* v3=(double*) calloc(dim3, sizeof(double));
v3[0]=4.8; v3[1]=0.1; v3[2]=-6.2; v3[3]=-2.5; v3[4]=7.2;
printf("Alloco il vettore v2...\n");
int dim2=5;
double* v2=(double*) calloc(dim2, sizeof(double));
v2[0]=2.1; v2[1]=-3.5; v2[2]=1.0; v2[3]=6.5; v2[4]=-5.2;

  
  /********************************************************
   *              TEST inizializzaArrayRandom             *
   ********************************************************/
  printf("Inizializzo l'array con numeri random...");
  double v1[dim1];
  inizializzaArrayRandom(v1, dim1, max_value);
  printf(" done.\n\n");

  /********************************************************
   *                    TEST vec_scale  v3                *
   ********************************************************/
/* printf("Scalo v3 di un fattore di 0.5...");
  vec_scale(v3, dim3, 0.5);
   printf(" done.\n");
   printf("v3: ");
   vec_print(v3, dim3);  
  printf("\n");
*/
  /********************************************************
   *                    TEST vec_dot  v2°v3
   *
   ********************************************************/
/*   printf("Calcolo il prodotto scalare tra v2 e v3...");
   double dot = vec_dot(v2, v3, dim2);
   printf(" done.\n");
   printf("Il prodotto scalare tra v2 e v3 e': %lf\n\n", dot);
*/
  /********************************************************
   *                    TEST vec_clone  v2                *
   ********************************************************/
   printf("Clono v2...");
  double *copy_v2 = vec_clone(v2, dim2);
  printf(" done.\n");
  printf("Copia v2: ");
  vec_print(copy_v2, dim2);  

  /********************************************************
  *                    TEST vec_positive_check  v2        *
  ********************************************************/
  printf("Controllo che tutti i numeri di v2 siano positivi...\n");
  printf( "%s\n", vec_clone(v2, dim2) ? "true: tutti i numeri sono positivi" : "false: almeno un numero è negativo" );

   free(copy_v2);
   free(v3);

  return 0;
}

void inizializzaArrayRandom(double v[], int dim, double max_value) {
  srand(3);
  for (int i=0;i<dim;i++){
    v[i]=rand() % 10;
  }
}

// da qui in poi definire le funzioni chiamate nel main.
//esercizio 4.1
void vec_scale(double v[], int dim, double scale){
for (int z=0;z<dim;z++){
	v[z]=v[z]*scale;
}
return;
}
/////////VEC_PRINT
void vec_print(double v[], int dim){
	for (int i=0; i<dim; i++){
		printf("%lf\n",v[i]);
	}
return;
}
/////////esercizio 4.2

double vec_dot(double src1[], double src2[], int dim){
double scalare=0.0;
for(int i=0;i<dim;i++){
	scalare=scalare+(src1[i]*src2[i]);	
}
return scalare;
}

////////esercizio 4.3
double* vec_clone(double v[], int dim){
double* copy_v2=(double*) calloc(dim,sizeof(double));
for (int d=0;d<dim;d++){
	copy_v2[d]=v[d];
}

return copy_v2;
}
///////esercizio 4.4 NON È VENUTO: RIFARE
bool vec_positive_check(double v[], int dim){
int count=0;
for(int i=0;i<dim;i++){
	printf("%lf\n",v[i]);
	if (v[i]<0.0){
		return 0;
	}
}
return 1;
}
















