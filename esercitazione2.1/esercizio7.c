#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	int *p=&a;
	int *m=&b;
	int *minimo=&b;
	printf("lala%d\n",*minimo);
	printf("inserisci a\n");
	scanf("%d",p);
	printf("insersci b\n");
	scanf("%d",m);
	printf("lala%d\n",*minimo);
	if(*p<*m){
		minimo=p;
		printf("prima del w1 il minimo è: %d\n",*minimo);
		printf("insersci comparazione \n");
		scanf("%d",m);
		while (*m!=0){
			if (*m!=0 && *m<*minimo){
				minimo=m;
				printf("%d\n",*minimo);
			}
		printf("insersci comparazione w1\n");
		scanf("%d",m);
		}	
	}
printf("il numero più piccolo è: %d\n",*minimo);
}
