//QUI CI STA IL MAIN 
#pragma once
#include "scl.h"
#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
int main(){
printf("\nRandom SCL list created: \n");
		TipoSCL scl=(TipoNodoSCL*)malloc(sizeof(TipoNodoSCL));
        int list_size = 6;
        creaRandomSCL(&scl,list_size);
		printf("INIZIO TEST\n");
        writeSCL(scl);
		
		printf("ESERICZIO 8.1\n");
		TipoSCL ese1= doubledCopy(scl);
		writeSCL(ese1);

/*		printf("ESERCIZIO 8.2\n");
		TipoSCL ese2=multipleSubset(scl,3);
		writeSCL(ese2);
		
	
		/*printf("ESERCIZIO 8.3\n");
		TipoSCL ese3=pairSubset(scl);
		writeSCL(ese3);
		*/

		/*printf("ESERCIZIO 8.4\n");
		TipoSCL ese4= getPrev(scl, ((scl->next)->next)->next);
		writeSCL(ese4);
		
		printf("ESERCIZIO 8.5\n");
		TipoSCL ese5= getTail(scl);
		printf("l'ultimo è %d\n",ese5->info);
*/








}
