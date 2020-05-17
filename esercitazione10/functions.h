#pragma once
////coda

typedef int T ;
struct NodoSCL {
	T info ;
	struct NodoSCL * next ;
};
typedef struct NodoSCL TipoNodo ;


struct CodaColl {
	TipoNodo * head;
	TipoNodo * tail;
};
typedef struct CodaColl CodaColl;
typedef CodaColl * Coda;


Coda * codaVuota ();
bool estVuota ( Coda * c );
void inCoda ( Coda * c , T e );
void outCoda ( Coda * c );
T primo ( Coda * c );
T ultimo ( Coda * c );
