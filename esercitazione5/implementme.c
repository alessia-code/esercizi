#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "es5_mat.h"

//////////////////////////////////////utility function implementation
Mat* Mat_alloc(int rows, int cols) {
  Mat* m = (Mat*)malloc(sizeof(Mat));
  m->rows = rows;
  m->cols = cols;
  m->row_ptrs = (float**)malloc(rows * sizeof(float*));
  for(int i = 0; i < m->rows; ++i) {
    m->row_ptrs[i] = (float*)malloc(m->cols * sizeof(float));
  }
  return m;
}

Mat* Mat_read(const char *filename) {
  FILE *fp = fopen(filename, "r");
  if(fp == NULL) {
    printf("Errore nell'apertura del file %s... esco!\n", filename);
    fclose(fp);
    return NULL;
  }

  int rows = 0;
  if(fscanf(fp, "%d", &rows) != 1) {
    printf("Errore durante la lettura del file %s, non riesco a leggere il numero di righe... esco!\n", filename);
    fclose(fp);
    return NULL;
  }
  if(rows == 0) {
    return NULL;
  }

  int cols = 0; 
  if(fscanf(fp, "%d", &cols) != 1) {
    printf("Errore durante la lettura del file %s, non riesco a leggere il numero di colonne... esco!\n", filename);
    fclose(fp);
    return NULL;
  }
  if(cols == 0) {
    return NULL;
  }

  Mat *m = Mat_alloc(rows, cols);
  for(int r = 0; r < rows; ++r) {
    for(int c = 0; c < cols; ++c) {
      float valore = 0.0f;
      if(fscanf(fp, "%f", &valore) != 1) {
        printf("Errore durante la lettura del file %s, non riesco a leggere tutti gli elementi... esco!\n", filename);
        fclose(fp);
        return NULL;
      }
      m->row_ptrs[r][c] = valore;
    }
  }

  fclose(fp);
  return m;
}

void Mat_print(Mat *m) {
  for(int r = 0; r < m->rows; ++r) {
    for(int c = 0; c < m->cols; ++c) {
      printf("%lf ", m->row_ptrs[r][c]);
    }
    printf("\n");
  }
}

void Mat_write(const char *filename, Mat *m) {
  FILE *fp = fopen(filename, "w");
  if(fp == NULL) {
    printf("Errore nell'apertura del file %s... esco!\n", filename);
    return;
  }
  
  fprintf(fp, "%d ", m->rows);
  fprintf(fp, "%d\n", m->cols);
  for(int r = 0; r < m->rows; ++r) {
    for(int c = 0; c < m->cols; ++c) {
      fprintf(fp, "%f ", m->row_ptrs[r][c]);
    }
    fprintf(fp, "\n");
  }

  fclose(fp);
}

void Mat_free(Mat *m) {  
  for(int i = 0; i < m->rows; ++i) {
    free(m->row_ptrs[i]);
  }
  free(m->row_ptrs);
  free(m);
}

///////////////////////////////////////////functions to implement
bool  Mat_is_symmetric(Mat *m) {
int rows=m-> rows;
int cols=m -> cols;
for (int i=0; i<rows;i++){
	for(int j=0; j<cols; j++){
		float val1= m-> row_ptrs[i][j];
		float val2= m-> row_ptrs[j][i];
			if (val1!=val2){
				printf("false\n");
				return 1;			
			}
	}
}
printf("true\n");
return 0;
}
//ESERCIZIO 5.2
void Mat_normalize_rows(Mat *m) {
int rows=m->rows;
int cols=m->cols;
int potenza,somma;
float norma;
for (int i=0;i<cols;i++){
	somma=0;
	norma=0.0;
	for (int j=0;j<rows;j++){
		float val1=m->row_ptrs[i][j];
		printf("val1 %f\n",val1);
		potenza=pow(val1,2);
		somma=somma+potenza;
		
	}
	for (int j=0;j<rows;j++){
		norma=sqrt(somma);
		m->row_ptrs[i][j]=m->row_ptrs[i][j]/norma;
		//printf("%f\n",m->row_ptrs[i][j]);
	}		
}
return;
}


//ESERCIZIO 5.3
Mat* Mat_clone(Mat *m) {
	Mat *copy=(Mat*)malloc(sizeof(Mat));
	int rows=m->rows;
	int cols=m->cols;
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			copy->row_ptrs[i][j]=m->row_ptrs[i][j];
			
		}

	}
	Mat_print(copy);
  return copy;
}






Mat* Mat_sum(Mat *m1, Mat *m2){

  Mat *output;
  // IMPLEMENT ME
  return output;
}


Mat* Mat_product(Mat *m1, Mat *m2){

  Mat *output;
  // IMPLEMENT ME
  return output;
}


