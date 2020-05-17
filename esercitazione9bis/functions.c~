//FUNZIONI MIE
#pragma once
#include "functions.h"
#include "main.c"
#include <stdlib.h>
Insieme insiemeVuoto(){
	Insieme ins=(TipoNodo*)malloc(sizeof(TipoNodo));
	ins=NULL;
	return ins;

}
Insieme inserisci(Insieme ins , T e){
	if(!membro(ins,e)){
		TipoNodo* n=(TipoNodo*)malloc(sizeof(TipoNodo));
		n->info=e;
		n->next=ins;
		ins=n;
	}return ins;
}

bool estVuoto(Insieme ins){
	return ins==NULL;}

bool membro(Insieme ins , T e){
	Insieme p=ins;
	while(p!=NULL){
		if (p->info==e)
			return true;
		p=p->next;
	}
	return false;
}
