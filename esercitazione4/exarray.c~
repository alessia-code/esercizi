#include <stdio.h>
#include <stdlib.h>

void inizializzaArrayRandom(double v[], int dim, double max_value);

void vec_print(double v[], int dim);

//void vec_print(double v[], int dim);

double* vec_sum(double v[], int dim);

double* vec_rec(double v1[], double v2[], int dim1, int dim2);

int main(int argc, char **argv) {
  int dim1 = 10;
  double max_value = 10;
  
  /********************************************************
   *              TEST inizializzaArrayRandom             *
   ********************************************************/
  printf("Inizializzo l'array con numeri random...");
  double v1[dim1];
  inizializzaArrayRandom(v1, dim1, max_value);
  printf(" done.\n\n");
 
  /********************************************************
   *                    TEST vec_print     v1             *
   ********************************************************/
  printf("v1: ");
  vec_print(v1, dim1);
  printf("\n\n");
  
  /********************************************************
   *                    TEST allocate vectors             *
   ********************************************************/
printf("Alloco il vettore v2...\n");
int dim2=5;
double* v2=(double*) calloc(dim2, sizeof(double));
v2[0]=2.1; v2[1]=-3.5; v2[2]=1.0; v2[3]=6.5; v2[4]=-5.2;

printf("v2: ");
vec_print(v2, dim2);
printf("\n");

printf("Alloco il vettore v3...\n");
int dim3=5;
double* v3=(double*) calloc(dim3, sizeof(double));
v3[0]=4.8; v3[1]=0.1; v3[2]=-6.2; v3[3]=-2.5; v3[4]=7.2;

printf("v3: ");
vec_print(v3, dim3);
printf("\n\n");
  
   /********************************************************
   *                    TEST vec_sum   v3                *
   ********************************************************/
   printf("Calcolo il vettore somma...\n\n");
   double *sum = vec_sum(v3, dim3);

printf("entro nel vec_print\n");
   vec_print(sum, dim3);
printf("esco dal vec_print\n");

   printf("\n");
   free(sum);
  
   
   /********************************************************
   *                    TEST vec_rec  v3                *
   ********************************************************/
printf("Calcolo il vettore v3 a meno delle ricorrenze dei valori in v4...\n\n");
   double* v4=( double *) malloc (dim3*sizeof(double));
   v4[0]= 4.8;
   v4[1]= 0.5;
   v4[2]= -4.2;
   v4[3]= -2.5;
   v4[4]= 2.3;
   double *v2_rec = vec_rec(v3, v4, dim2, dim3);
   vec_print(v2_rec, dim3);
   printf("\n");
   free(v2_rec);

  return 0;
}

void inizializzaArrayRandom(double v[], int dim, double max_value) {
  srand(3);
  int i;
  for (i=0;i<dim;i++){
    v[i]=rand() % 10;
  }
}

// da qui in poi definire le funzioni chiamate nel main.
void vec_print(double v[], int dim){
	for (int i=0; i<dim; i++){
		printf("%lf\n",v[i]);
	}
return;
}
//funzione per somma 
double* vec_sum(double v[], int dim){
double* summ=(double*) calloc(dim, sizeof(double));
double somma=0.0;
for (int y=0; y<dim; y++){
	for (int n=y; n<dim; n++){
		somma=somma+v[n];
	}
	printf("SOMMA=%lf\n",somma);
	summ[y]=somma;
	somma=0;
}
return summ;
}
// 3.14 ultima funzione
double* vec_rec(double v1[], double v2[], int dim1, int dim2){
double* Somma=(double*) calloc(dim1,sizeof(double));
double occorrenza=0.0;
for (int g=0; g<dim1; g++){
	occorrenza=v1[g];
	for (int h=0; h<dim2; h++){
		if (v2[h]==occorrenza){
			Somma[g]=occorrenza;
			break;
		}
	}	
}
return Somma;
}










