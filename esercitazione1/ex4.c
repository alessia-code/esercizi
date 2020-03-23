#include <stdio.h>
int main(){
int N,a=0,b=0;
printf("insersci numero N: \n");
scanf("%d",&N);
while (a<N){
	b=0;
	if (a==0 || a==N-1){
		while (b<N){
			printf("*");
			b++;}
	}
	else  {
		while (b<N){
			if (b==0 || b==N-1){
				printf("*");}
			else{
				printf(" ");}
			b++;			
			}
	}
printf("\n");
a++;
}
return 0;
}
