#pragma once
#include "functions.h"
#include "main.c"
#include <stdio.h>
#include <stdlib.h>

Coda * codaVuota (){
	Coda *c=NULL;
	return c;
}

bool estVuota ( Coda * c ){
	return (((*c)->head)->next==NULL);
}
/*
void inCoda ( Coda * c , T e );
void outCoda ( Coda * c );
T primo ( Coda * c );
T ultimo ( Coda * c );

*/
