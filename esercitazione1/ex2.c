#include <stdio.h>
int main(){
int a=0,somma=0,count=0;
printf("insersci il primo numero: \n");
scanf("%d",&a);
while (a!=0){
	count++;
	somma=somma+a;
	printf("insersci il numero successivo: \n");
	scanf("%d",&a);
}
printf("il valore della media è: %d\n",(somma/count));
}
