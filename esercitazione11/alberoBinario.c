#pragma once
#include "alberoBinario.h"
#include "main.c"
#include <stdio.h>
#include <stdlib.h>

// Implementazioni del tipo astratto
int DimensioneAlbero(TipoAlbero a){
	if (estVuoto(a))
		return 0;
	else
		return (1+DimensioneAlbero(a->sinistro)+DimensioneAlbero(a->destro));

}

TipoInfoAlbero TrovaMassimo(TipoAlbero a){
	if (estVuoto(a))
		return -12345;
	else{
		int c= radice(a);
		int s=TrovaMassimo(a->sinistro);
		int d=TrovaMassimo(a->destro);
		return massimo(c,s,d);
	}
		

}
int massimo(int a, int b, int c){
	if (a>b && a>c){
		return a;}
	else if (a<c && a>b){
		return c;}
	else {
	return b;}
}

TipoInfoAlbero sommaValoriFoglie(TipoAlbero a){
	if (estVuoto(a))
        return 0;
    else if (estVuoto(sinistro(a)) && estVuoto(destro(a)))
        return radice(a);
    else
        return sommaValoriFoglie(sinistro(a)) + sommaValoriFoglie(destro(a));
	
}
// Valore di errore
TipoInfoAlbero ERRORE_InfoAlbBin=-1000;

TipoAlbero albBinVuoto() {
  return NULL;
}
int contaFraMinMax(TipoAlbero a, TipoInfoAlbero min, TipoInfoAlbero max){
	if (a==NULL)
		return -123;
	int nodi=0;
	for (int i=min+1;i<max;i++){
		nodi+=contaNodiLivello(a,i);
	}
	return nodi;	
}
int contaNodiLivello(TipoAlbero a, int l) {
    if (estVuoto(a)) 
        return 0;
    else if (l==0)
        return 1;
    else
        return contaNodiLivello(sinistro(a),l-1) +
               contaNodiLivello(destro(a),l-1);
}

TipoAlbero creaAlbBin(TipoInfoAlbero info, TipoAlbero sx, TipoAlbero dx) {
  TipoAlbero a = (TipoAlbero) malloc(sizeof(TipoNodoAlbero));
  a->info = info;
  a->sinistro = sx;
  a->destro = dx;
  return a;
}


bool estVuoto(TipoAlbero a) {
  return (a == NULL);
}

TipoInfoAlbero radice(TipoAlbero a) {
  if (a == NULL) {
    printf ("ERRORE accesso albero vuoto \n");
    return ERRORE_InfoAlbBin;
  } else {
    return a->info;
  }
}


TipoAlbero sinistro(TipoAlbero a) {
  if (a == NULL) {
    printf ("ERRORE accesso albero vuoto \n");
    return NULL;
  } else {
    return a->sinistro;
  }
}

TipoAlbero destro(TipoAlbero a) {
  if (a == NULL) {
    printf ("ERRORE accesso albero vuoto \n");
    return NULL;
  } else {
    return a->destro;
  }
}


// Funzioni esterne

void stampaParentetica(TipoAlbero a) {
    if (estVuoto(a)) {
        printf("()");
    }
    else {
        printf("( %d ", radice(a));
        stampaParentetica(sinistro(a));
        printf(" ");
        stampaParentetica(destro(a));
        printf(" )");
    }
}


