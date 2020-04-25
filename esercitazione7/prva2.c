#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

typedef float TipoInfoSCL;

struct ElemSCL {
  TipoInfoSCL info;
  struct ElemSCL *next;
};

typedef struct ElemSCL TipoNodoSCL;
typedef TipoNodoSCL * TipoSCL;


void addSCL (TipoSCL *scl, TipoInfoSCL e) {
  TipoSCL temp = *scl;
  *scl = (TipoNodoSCL *) malloc(sizeof(TipoNodoSCL));
  (*scl)->info = e;
  (*scl)->next = temp;
}

void delSCL (TipoSCL *scl) {
  TipoSCL temp = *scl;
  *scl = (*scl)->next;
  free(temp);
}

// restituisce true se scl e’ vuota
bool emptySCL (TipoSCL scl) {
  return scl==NULL;
}


// creazione scl random
void creaRandomSCL (TipoSCL *scl, int n) {
  if (n>0) {
    float e = ((float)rand()/(float)(RAND_MAX)) * 20 - 10;
    addSCL(scl, e);
    creaRandomSCL(scl,n-1);
  }
}

// dealloca tutta la scl
void freeSCL(TipoSCL *scl) {
  if (!emptySCL(*scl)) {
    delSCL(scl);  // side-effect su scl
    freeSCL(scl);
  }
}



/*  schema ricorsione su SCL

... f(TipoSCL scl, ...) {

  if (emptySCL(scl))
    // passo base
  else {
    // passo ricorsivo
    // operazione sul primo elemento
    ... scl->info
    // ricorsione sul resto della scl
    ... f(scl->next, ...)
  }

}

*/

// scrittura dell'informazione nel nodo ( float )
void writeTipoInfo (TipoInfoSCL d) {
  printf("%.2f ", d);
}

// scrittura della SCL
void writeSCL (TipoSCL scl) {
  if (emptySCL(scl))
    printf("\n");
  else {
    writeTipoInfo(scl->info);
    writeSCL(scl->next);
  }
}


// restituisce la lunghezza della scl
// Schema Contatore
int lengthSCL ( TipoSCL scl ) {
  if (emptySCL(scl))
    return 0;
  else
    return 1 + lengthSCL(scl->next);
}


// conta i valori positivi
// Schema Contatore condizionato
int countPosSCL ( TipoSCL scl ) {
  if (emptySCL(scl))
    return 0;
  else if (scl->info > 0)
    return 1 + countPosSCL(scl->next);
  else
    return countPosSCL(scl->next);
}


// restituisce true se trova e in scl
// Schema Accumulazione su OR
bool isinSCL (TipoSCL scl, TipoInfoSCL e) {
  if (emptySCL(scl))
    return false;
  else
    return (fabs(scl->info-e)<0.01) || isinSCL(scl->next,e);
}


// restituisce true se tutti i valori in scl sono positivi
// Schema Accumulazione su AND
bool allPosSCL (TipoSCL scl) {
  if (emptySCL(scl))
    return true;
  else
    return (scl->info>0) && allPosSCL(scl->next);
}


// restituisce la somma dei valori in scl
// Schema Accumulazione su +
float sumSCL (TipoSCL scl) {
  if (emptySCL(scl))
    return 0;
  else
    return scl->info + sumSCL(scl->next);
}

// funzione ausiliaria
float max(float a, float b) {
  return (a>b)?a:b;
}

// restituisce il valore massimo in scl
// Schema Accumulazione su max
float maxSCL (TipoSCL scl) {
  if (emptySCL(scl))
    return -999;
  else
    return max(scl->info, maxSCL(scl->next));
}




int main() {

  srand(20200416);
  // srand(time(NULL));

  TipoSCL scl1 = NULL;
  TipoSCL scl2 = NULL;
  creaRandomSCL(&scl1, 10);
  creaRandomSCL(&scl2, 10);
  writeSCL(scl1);
  writeSCL(scl2);

  int l1 = lengthSCL(scl1);
  int l2 = lengthSCL(scl2);
  printf("length: %d %d\n", l1, l2);

  int p1 = countPosSCL(scl1);
  int p2 = countPosSCL(scl2);
  printf("count pos: %d %d\n", p1, p2);

  float e = -5.55;
  bool i1 = isinSCL(scl1, e);
  bool i2 = isinSCL(scl2, e);
  printf("isin %.2f: %d %d\n", e, i1, i2);

  bool a1 = allPosSCL(scl1);
  bool a2 = allPosSCL(scl2);
  printf("all pos: %d %d\n", a1, a2);

  float s1 = sumSCL(scl1);
  float s2 = sumSCL(scl2);
  printf("sum: %.2f %.2f\n", s1, s2);

  float m1 = maxSCL(scl1);
  float m2 = maxSCL(scl2);
  printf("max: %.2f %.2f\n", m1, m2);

  freeSCL(&scl1);
  freeSCL(&scl2);

}





