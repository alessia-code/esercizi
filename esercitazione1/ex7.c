#include <stdio.h>
int main(){
int a,min;
printf("insersci il primo numero \n");
scanf("%d",&a);
min=a;
while (a!=0){
	if (a<min){
		min=a;
	}
	printf("inserisci prossimo numero \n");
	scanf("%d",&a);
}
printf("il numero minore inserito è: %d\n",min);
return 0;
}
