#include <stdio.h>
int main(){
int i1=24;
int i2=12;
int mcd=0;
if (i1<i2){
	for (int i=1; i<=i1; i++){
		if (i1%i==0 && i2%i==0){
			if (i>=mcd){
				mcd=i;
			}
		} 
	}
}
if (i1>i2){
	for (int z=1; z<=i2; z++){
		if (i1%z==0 && i2%z==0 && z>=mcd){
			mcd=z;
		}
	}
}
printf("%d\n",mcd);
}
