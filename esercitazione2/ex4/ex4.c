#include <stdio.h>
#include <limits.h>
int main(){
	int x=INT_MAX;
	printf("%d\n",x);
	x++;
	printf("%d\n",x);	
}
/* il numero massimo corrisponde anche a ((2^31)-1) */
