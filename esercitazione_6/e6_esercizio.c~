#include "e6_esercizio.h"
#include <stdio.h>

//ESERCIZIO 6.1
int lunghezza(char *s){
	if (*s=='\0'){
		return 0;}
	else{
		return 1+lunghezza(s+1);
	}

}


//ESERCIZIO 6.2
int char_in_posizione(char *s, char ch){
	if (*s=='\0'){
		return -1;
	}
	if (*s!=ch){
		return 1+ char_in_posizione(s+1, ch);
	}
	if (*s==ch){
		return 0;
		}	
}
//ESERCIZIO 6.3
void vec_integral(float* v, int n){
	return;
}


//ESERCIZIO 6.4
float vec_dot(float* v1, float* v2, int n) {
	if (n==0){
		return 0;
	}	
	else{
		float a=v1[0];
		float b=v2[0];
		return (a*b)+vec_dot(v1+1, v2+1, n-1);
	}
}








