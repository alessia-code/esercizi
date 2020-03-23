#include <stdio.h>
int main(){
int N,i=0,c=0;
printf("inserisci N: \n");
scanf("%d",&N);
	while (i<N){
		c=0;
		while (c<N){
		printf("*");
		c++;
		}
		printf("\n");	
		i++;
	}
}
