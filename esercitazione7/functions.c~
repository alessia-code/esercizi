#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include "ctype.h"

//esercizio 7.1
bool tuttiMinuscoli(char *s){
	if (*s=='\0')
		return true;
	else{
		//printf("in else\n");
		if ((*s>='a') && (*s<='z')){
			//printf("è minuscolo\n");
			return tuttiMinuscoli(s+1);
		}
		else{
			return false;
		}
	}
}


// esercizio 7.2
void converti(char *s){
	if (*s=='\0')
		return;
	else{
		if ((*s>='A')&&(*s<='Z')){
			(*s)=(*s)+('a'-'A');
			return converti(s+1);
		}
		else
			return converti(s+1);
	}
}



//esercizio 7.3
int contaParentesi(char *s){
  if (*s=='\0'){
	return 0;
	}
	else{
		if( (*s=='[')||( *s==']')||( *s=='(')||( *s==')')|| (*s=='{')|| (*s=='}')){
			return 1+contaParentesi(s+1);	
			printf("in if\n");	
		}
		else {
			return 0+contaParentesi(s+1);
		}
	}
}
//ESERCIZIO 7.4
void concatenate(char* dest, char* src){
	if (*dest!='\0') //arrivo alle fine di dest
		concatenate(dest+1,src);
	else if(*src!='\0'){ //implemento con src
		(*dest)+=(*src);
		return concatenate(dest+1,src+1);
		
	}
}

//ESERCIZIO 7.5
float prodotto(float a[], int n){
	if (*a=='\0'){
		return 1;
	}
	else{
		return ((*a)*(prodotto(a+1,n-1)));
	}
 
}

//ESERCIZIO 7.6
//FUNZIONI AUSILIARI
//SOMMA
float sommaSCL(TipoSCL head_ptr){
		if (head_ptr==NULL){
			return 0.0;}
		else{
			return ((head_ptr->info)+(sommaSCL(head_ptr->next)));}
}
//LUNGHEZZA 
int lunghezzaSCL(TipoSCL head_ptr){
		if (head_ptr==NULL){
			return 0;}
		else {
			return (1+(lunghezzaSCL(head_ptr->next)));}
}
//FUNZIONE PRINCIPALE 7.6
float SCL_media(TipoSCL head_ptr){
	float s=sommaSCL(head_ptr);
	int l=lunghezzaSCL(head_ptr);
	return s/l;
}
  
//ESERCIZIO 7.7

void SCL_integral(TipoSCL head_ptr){
	if (head_ptr->next==NULL)
		return;
	else{
		(head_ptr->next->info)=(head_ptr->next->info)+(head_ptr->info);
		SCL_integral(head_ptr->next);
	}	
}

//ESERCIZIO 7.8
float SCL_dot(TipoSCL head1_ptr, TipoSCL head2_ptr) {
	if (head1_ptr ==NULL || head2_ptr==NULL)
  		return 0.0;
	else
		return (((head1_ptr->info)*(head2_ptr->info))+ (SCL_dot(head1_ptr->next, head2_ptr->next)));

}
