#pragma once
#include "functions.h"
#include "functions.c"
#include <stdio.h>
#include <stdlib.h>
int main(){
	Coda * c=codaVuota ();
	if (estVuota(c))
		printf("TRUE\n");
	return 0;
}
