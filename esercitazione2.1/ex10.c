#include <stdio.h>

int main(){

int temp;
int *tp=&temp;
char car;
char *cp=&car;

printf("inserisci un carattere C,K,F: \n");
scanf("%c",cp);
printf("%c,%c\n",*cp,car);

printf("inserisci temperatura \n");
scanf("%d",tp);
printf("faccio controllo%d,%d\n", *tp,temp);


}
