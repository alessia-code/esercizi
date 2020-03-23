#include <stdio.h>
int main(){
	int N,i=0,c=0;
	printf("inserisci N: \n");
	scanf("%i",&N);
	while (i<N){
		if (i==0 || i==(N-1)){
			c=0;
			while (c<N){
				printf("*");
				c++;}
		printf("\n");		
		c=0;}
		else{
			c=0;
			while (c<N){
				if (c==0 || c==N-1){
					printf("*");}
				else{
					printf(" ");}
				c++;}
			printf("\n");
		}
		i++;}

}
/*
int main(){
	int i,j,N;
	printf("inserisci N: \n");
	scanf("%i",&N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==0||i==N-1){
				printf("*");}
			else{
				if(j==0||j==N-1){
					printf("*");}
				else{
					printf(" ");}}
	}
	printf("\n");}
}
*/





