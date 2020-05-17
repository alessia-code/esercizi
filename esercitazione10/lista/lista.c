#pragma once
#include "main.c"
#include "lista.h"
#include<stdio.h>
#include<stdlib.h>

void printa(TipoLista l){
		while (l!=NULL){
			printf("elem: %d\n",l->info);
			l=l->next;
		}
	return;
}

T sommaElementi(TipoLista l){
	if (estVuota ( l )){
		return 0;
	}
	else{
		return (l->info)+sommaElementi(l->next);
	}
}
TipoLista halfMerge(TipoLista l1, TipoLista l2){
	TipoLista ris=listaVuota();
	int i=0;
	while (l1!=NULL){
		if (i<length (l1)/2)
			ris=cons( l1->info , ris);
	i++;
	l1=l1->next;
	}
	int z=0;
	while (l2!=NULL){
		if (z>length (l2)/2)
			ris=cons( l2->info , ris);
	z++;
	l2=l2->next;
	}
	return ris;
}


/*TipoLista appendNtimes ( TipoLista l , T e, int n){
	TipoLista ris=(TipoLista)malloc(sizeof(TipoNodo));
	TipoNodo *ris=
	TipoLista ris=NULL;

	int i=0;
	while (l!=NULL){
		ris=append(ris,l->info);
		l=l->next;
	}
	while (i<n){
		ris=append(ris,e);
		i++;	
	}
	return ris;
}
*/
/*
TipoLista appendNtimes ( TipoLista l , T e, int n){
	TipoLista ris;
	if (n==0 && l==NULL){
		printf("1\n");
		return ris;}
	else if ( l!=NULL && n>0){
					printf("2\n");
			ris=cons(l->info,ris);
			ris=append(ris,e);
		return appendNtimes (l->next , e, n--);
	}
	else if (n==0 && l!=NULL){
			printf("3\n");
			ris=cons(l->info,ris);
			return appendNtimes (l->next , e, n);

	}
	else if (n>0 && l==NULL){
				//printf("4\n");
		ris=append(ris,e);
		return appendNtimes (l, e, n--);
	}
		
}

*/




TipoLista listaVuota () { 
	return NULL ;
}

int estVuota ( TipoLista l ) { 
	return ( l == NULL ) ;
}

TipoLista cons ( T e , TipoLista l ) {
  TipoLista nuovo = ( TipoLista ) malloc ( sizeof ( TipoNodo));
  nuovo -> info = e ;
  nuovo -> next = l ;
  return nuovo ;
}

T car ( TipoLista l ) {
  if ( l == NULL ) {
  printf ( " ERRORE : lista vuota \n " ) ;
  exit (1) ;
  }
  return l -> info ;
}

TipoLista cdr ( TipoLista l ) {
  if ( l == NULL ) {
  printf ( " ERRORE : lista vuota \n " ) ;
  exit (1) ;
  }
  return l -> next ;
}

int length ( TipoLista l ) {
  if ( estVuota ( l ) ) return 0;
  return 1 + length ( cdr ( l ) ) ;
}

TipoLista append ( TipoLista l , T e ) {
  if ( estVuota ( l ) ) {
  return cons (e , l ) ;
  }
  return cons ( car ( l ) , append ( cdr ( l ) ,e ) ) ;
}

TipoLista concat ( TipoLista l1 , TipoLista l2 ) {
  if ( estVuota ( l2 ) ) {
  return ( l1 ) ;
  }
  return ( concat ( append ( l1 , car ( l2 ) ) , cdr ( l2 ) ) ) ;
}

T get ( TipoLista l , int i ) {
  if ( i < 0 || estVuota ( l ) ) {
    printf ( " ERRORE : lista vuota o indice fuori dai limiti !\n " ) ;
  exit (1) ;
  }
  if ( i ==0) return car ( l ) ;
    return get ( cdr ( l ) ,i -1) ;
}

TipoLista ins ( TipoLista l , int i , T e ) {
  if ( i < 0 || (i >0 && estVuota ( l ) ) ) {
    printf ( " ERRORE : indice fuori dai limiti !\n " ) ;
  exit (1) ;
  }
  if ( i ==0) return cons (e , l ) ;
    return ( cons ( car ( l ) , ins ( cdr ( l ) , i -1 , e ) ) ) ;
}

