#include <stdio.h>
int main(){
int halbero,htronco,i=1,w=0,z=0,spazi=0;
printf("inserire altezza albero: \n");
scanf("%d",&halbero);
printf("inserire altezza tronco: \n");
scanf("%d",&htronco);
//albero
	while(i<=halbero+1){
		spazi=halbero+1-i;
		while(z<spazi){
			z++;
			printf(" ");
			if (z==spazi){
				while(w!=(i+i-1)){
					printf("*");
					w++;
				}
			}
		}
		printf("\n");
		z=0;
		w=0;
		i++;
	}
//base
	
	




}
