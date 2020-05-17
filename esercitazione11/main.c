#pragma once
#include "alberoBinario.c"
#include "alberoBinario.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
	TipoAlbero sx=albBinVuoto();
	TipoAlbero dx=albBinVuoto();
	TipoAlbero a=creaAlbBin(1 , sx, dx);
	TipoAlbero b=creaAlbBin(2 ,sx, dx);
	TipoAlbero c=creaAlbBin(3 ,sx,dx);
	TipoAlbero d=creaAlbBin(4 , sx, dx);
	TipoAlbero e=creaAlbBin(5 , a, b);
	TipoAlbero f=creaAlbBin(6 , c, d);
	TipoAlbero g=creaAlbBin(7 , e, f);
	//TipoAlbero h=creaAlbBin(9 , a, dx);
	stampaParentetica(g);
	printf("\ndim %d\n", contaFraMinMax(g, 0, 2));
}
