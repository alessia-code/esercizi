#pragma once
typedef int T ;
struct NodoSCL {
	T info ;
	struct NodoSCL * next ;
};
typedef struct NodoSCL TipoNodo ;
typedef TipoNodo * TipoLista ;

void printa(TipoLista l);
TipoLista listaVuota ();
int estVuota ( TipoLista l );
TipoLista cons ( T e , TipoLista l );
T car ( TipoLista l );
TipoLista cdr ( TipoLista l );
int length ( TipoLista l );
TipoLista append ( TipoLista l , T e );
TipoLista concat ( TipoLista l1 , TipoLista l2 );
T get ( TipoLista l , int i );
TipoLista ins ( TipoLista l , int i , T e );
T sommaElementi(TipoLista l);
TipoLista halfMerge(TipoLista l1, TipoLista l2);
TipoLista appendNtimes ( TipoLista l , T e, int n);
