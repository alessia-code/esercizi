#pragma once
// Tipo info dell'albero
typedef int TipoInfoAlbero;


// Albero con strutture collegate
typedef struct StructAlbero {
  TipoInfoAlbero info;
  struct StructAlbero* destro;
  struct StructAlbero* sinistro;
} TipoNodoAlbero;

typedef TipoNodoAlbero* TipoAlbero;

TipoAlbero albBinVuoto();
bool isfoglia(TipoAlbero a);
int massimo(int a, int b, int c);
TipoAlbero creaAlbBin(TipoInfoAlbero info, TipoAlbero sx, TipoAlbero dx);
bool estVuoto(TipoAlbero a);
TipoInfoAlbero radice(TipoAlbero a);
TipoAlbero sinistro(TipoAlbero a);
TipoAlbero destro(TipoAlbero a);
void stampaParentetica(TipoAlbero a);
int DimensioneAlbero(TipoAlbero a);
TipoInfoAlbero TrovaMassimo(TipoAlbero a);
TipoInfoAlbero sommaValoriFoglie(TipoAlbero a);
int contaFraMinMax(TipoAlbero a, TipoInfoAlbero min, TipoInfoAlbero max);
int contaNodiLivello(TipoAlbero a, int l);
