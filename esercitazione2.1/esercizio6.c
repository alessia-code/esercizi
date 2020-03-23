#include <stdio.h>
int main(){
int i=10;
int j=-1;
char *p,*q;
char a,b;
b=(char)i;
p=&b;
*p=(char)i;
j=(int)b;
i=(int)b;

printf("%d == %d\n",i,j);

}
