#include "esercizio_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int conta_doppie(char *s){
	if (*s=='\0')
		return 0;
	else{
		if ((s[0]==(s[1])) || (s[1]==(s[0])+('a'-'A')) || (s[1]==(s[0])-('a'-'A'))){
			printf("%c e %c in if\n",s[0], s[1]);
			return 1+conta_doppie(s+1);
			}
		else
			return 0+conta_doppie(s+1);
	}
	
}


