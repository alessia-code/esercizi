
//DEFINISCO INSIEME
typedef int T ; // Cambia a seconda del tipo trattato
struct NodoSCL {
	T info ;
	struct NodoSCL* next;
};
typedef struct NodoSCL TipoNodo;
typedef TipoNodo* Insieme;


//DEFINISCO ITERATORE 
/*
typedef struct {
	NodoSCL* ptr ;
}IteratoreInsieme;
*/


Insieme insiemeVuoto();
Insieme inserisci(Insieme ins , T e);
Insieme elimina(Insieme ins , T e);
bool estVuoto(Insieme ins);
bool membro(Insieme ins,T e);
//IteratoreInsieme * creaIteratoreInsieme( Insieme * ins );
//bool hasNext ( IteratoreInsieme * it );
//T next ( IteratoreInsieme * it );
//Insieme intersezione(Insieme a, Insieme b);
//Insieme unione(Insieme a, Insieme b);
