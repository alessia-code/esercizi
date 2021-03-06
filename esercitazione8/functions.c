//8 qua vanno le MIE funzioni
#pragma once

#include "scl.h"
#include "functions.h"
#include<stdlib.h>
#include <stdio.h>

//ESERCIZIO 8.1

TipoSCL doubledCopy( TipoSCL h ){
	
	TipoSCL storta=NULL;
	TipoSCL dritta=NULL;
	TipoSCL ris=NULL;
	if (h==NULL)
		return ris;
	while(h!=NULL){
			addSCL(&storta,(h->info)); //crea al contrario
			addSCL(&ris,h->info);
			h=h->next;
		
	}
	
	while(storta!=NULL){
		addSCL(&dritta,storta->info); //crea dritta
		addSCL(&ris,storta->info);
			storta=storta->next;
	}

	
	/*while (dritta!=NULL){
			addSCL(&ris,dritta->info);
			dritta=dritta->next;
	}*/
	return ris;
}

//ESERCIZIO 8.2
TipoSCL multipleSubset( TipoSCL list, unsigned int m ){
	if(emptySCL(list))
		return NULL;
	else{
		TipoSCL temp=NULL;
		while(!emptySCL(list)){
			if ((list->info)%m==0)
				addSCL(&temp,list->info);
			list=list->next;
		}
	TipoSCL ris=NULL;
	while(!emptySCL(temp)){
		addSCL(&ris,temp->info);
		temp=temp->next;
	}
	
return ris;
}}

//ESERICIZIO 8.3

TipoSCL pairSubset( TipoSCL list ){
	if (list==NULL)
		return NULL;
	TipoSCL temp=NULL;
	int pos=0;
	while (!emptySCL(list)){
		if (pos%2==0)
			addSCL(&temp,list->info);
		pos++;
		list=list->next;	
	}
	TipoSCL ris=NULL;
	while(!emptySCL(temp)){
		addSCL(&ris,temp->info);
		temp=temp->next;
	}
	return ris;
}
//ESERICIZIO 8.4
/*
TipoSCL getPrev(TipoSCL list, TipoSCL n){
	if((list==NULL)|| (n==NULL) || (list->next==NULL)||(list==n)){
		printf("errore\n");
		return NULL;
	}
	else if((list->next)==n)
		return list;
	else{
		return getPrev((list->next),n);
	}
}*/
//ESERCIZIO 8.5

TipoSCL getTail(TipoSCL list){
	if (list==NULL)
		return NULL;
	else if(list->next==NULL)
		return list;
	else
		return getTail(list->next);
}

















