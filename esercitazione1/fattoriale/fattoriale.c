#include <stdio.h>

int main(){
int n,i;
unsigned long long int fa=1;
printf("Inserisci n...\n");
scanf("%i",&n);
for(i=1;i<=n;i++){
	fa*=i;
}
printf("%llu\n",fa);
}
