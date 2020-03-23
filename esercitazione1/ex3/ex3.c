#include <stdio.h>
int main(){
	int N,i=0,c=0;
	printf("inserisci numero N: \n");
	scanf("%i",&N);
	while (i<N){
		while (c<N){
			printf("*");
			c++;
		}
		printf("\n");
		i++;
		c=0;
	}
}
