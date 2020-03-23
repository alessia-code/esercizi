#include <stdio.h>
#include <math.h>
int main(){
	unsigned char b;
	short int s;
	int i,cc;
	long l;
	float f,r;
 	double d;
	char c;
	printf("inseire b\n");
	scanf("%c",&b);
	printf("%d\n",b);
	cc=(int) b;
	printf("inseire s\n");
	scanf("%hd",&s);

	printf("inseire i\n");
	scanf("%d",&i);

	printf("inseire l\n");
	scanf("%ld",&l);
	printf("%ld\n", 10*l);

	printf("inseire f\n");
	scanf("%f",&f);

	printf("inseire d\n");
	scanf("%lf",&d);

	printf("inseire c\n");
	scanf("%s",&c);

	printf("il risultato dell' operazione b+10l è: \n");
	printf("%ld\n",(cc+10*l));
	printf("il risultato dell' operazione (b+i)*l è: \n");
	printf("%ld\n",(b+i)*l);
	printf("il risultato dell' operazione 4 è: \n");
	printf("%f\n",((s/f)+sin(f)));
	r=(float) s;
	printf("%f\n", r/f);
	printf("%f\n",sin(f));





	printf("il ris del 5 è: \n");
	if (c!='b'){
		printf("%d\n",0);}
	else {printf("%d\n",1);}

	printf("il ris del 6 è: \n");
	printf("%lf\n",(l+1.5*f));

	printf("il ris del 7è: \n");
	printf("%d\n",i<10);

	


}
