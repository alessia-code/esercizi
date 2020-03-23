#include <stdio.h>
 int main(){
	int c=sizeof(char);
	int i= sizeof(int);
	int s=sizeof(char);
	int l=sizeof(long);
	int f=sizeof(float);
	int d=sizeof(double);
	printf("dimensione di char %d\n",c);
	printf("dimensione di intero %d\n",i);
	printf("dimensione di short %d\n",s);
	printf("dimensione di long %d\n",l);
	printf("dimensione di float %d\n",f);
	printf("dimensione di double %d\n",d);
} 
