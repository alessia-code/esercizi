typedef ... TipoInfoAlbero;

typedef struct StructAlbero {
  TipoInfoAlbero info;
  struct StructAlbero* destro;
  struct StructAlbero* sinistro;
} TipoNodoAlbero;

typedef TipoNodoAlbero* TipoAlbero;


//ALBERO VUOTO
TipoAlbero albBinVuoto() {
  return NULL;
}
//CREA ALBERO 
TipoAlbero creaAlbBin(TipoInfoAlbero info, TipoAlbero sx, TipoAlbero dx) {
  TipoAlbero a = (TipoAlbero) malloc(sizeof(TipoNodoAlbero));
  a->info = info;
  a->sinistro = sx;
  a->destro = dx;
  return a;
}
//CONTROLLO ALBERO VUOTO
bool estVuoto(TipoAlbero a) {
  return (a == NULL);
}
//RITORNA RADICE
TipoInfoAlbero radice(TipoAlbero a) {
  if (a == NULL) {
    printf ("ERRORE accesso albero vuoto \n");
    return ERRORE_InfoAlbBin;
  } else {
    return a->info;
  }
}
//RITORNA SINISTRO
TipoAlbero sinistro(TipoAlbero a) {
  if (a == NULL) {
    printf ("ERRORE accesso albero vuoto \n");
    return NULL;
  } else {
    return a->sinistro;
  }
}
//RITORNA DESTRO
TipoAlbero destro(TipoAlbero a) {
  if (a == NULL) {
    printf ("ERRORE accesso albero vuoto \n");
    return NULL;
  } else {
    return a->destro;
  }
}
//STAMPA PARENTETICA principale
void stampaParentetica(TipoAlbero a) {
    if (estVuoto(a)) {
        printf("()");
    }
    else {
        printf("( %c ", radice(a));
        stampaParentetica(sinistro(a));
        printf(" ");
        stampaParentetica(destro(a));
        printf(" )");
    }
}
//stampa ausiliaria
void stampaAlbero(const char* astr, TipoAlbero a) {
    printf("Albero %s: ",astr);
    stampaParentetica(a);
    printf("\n");
}
// Valore di errore
const TipoInfoAlbero ERRORE_InfoAlbBin='*';

//CREAZIONE RANDOM ALBERO
TipoAlbero randomAlbero(int size) {
    if (size==0)
        return albBinVuoto();
    else if (size==1) {
        TipoInfoAlbero c = 'A'+rand()%26;
        return creaAlbBin(c,albBinVuoto(),albBinVuoto());
    }
    else {
        TipoInfoAlbero c = 'A'+rand()%26;
        int l = rand()%(size-1);
        int r = size - 1 - l;
        return creaAlbBin(c,randomAlbero(l),randomAlbero(r));
    }
}
//DIMENSIONE ALBERO
int size(TipoAlbero a) {
    if (estVuoto(a))
        return 0;
    else
        return 1 + size(sinistro(a)) + size(destro(a));
}

// CONTA NUMERO FOGLIE
int numeroFoglie(TipoAlbero a) {
    if (estVuoto(a))
        return 0;
    else if (estVuoto(sinistro(a)) && estVuoto(destro(a)))
        return 1;
    else
        return numeroFoglie(sinistro(a)) + numeroFoglie(destro(a));
}

//VERIFICA PRESENZA ELEMENTO e (accumulazione OR)
bool presente(TipoAlbero a, TipoInfoAlbero e) {
    if (estVuoto(a))
        return false;
    else
        return (radice(a)==e) || 
               presente(sinistro(a),e) || 
               presente(destro(a),e);
}

// TUTTI MAIUSCOLI (accumulazione AND)
bool maiuscoli(TipoAlbero a) {
    if (estVuoto(a))
        return true;
    else {
        TipoInfoAlbero c = radice(a);
        bool r = (c>='A') && (c<='Z');
        return r && maiuscoli(sinistro(a)) && maiuscoli(destro(a));
    }
}

// PROFONDITÀ ALBERO
int profondita(TipoAlbero a) {
    if (estVuoto(a))
        return -1;
    else {
        int ps = profondita(sinistro(a));
        int pd = profondita(destro(a));
        return (std::max(ps,pd)+1);
    }
}

// STAMPA CONTENUTO DEI NODI A LIVELLO L
void stampaNodiLivello(TipoAlbero a, int l) {
    if (estVuoto(a)) 
        return;
    else if (l == 0)
        printf("%c ", radice(a));
    else {
        stampaNodiLivello(sinistro(a), l-1); 
        stampaNodiLivello(destro(a), l-1); //ERRORE l--
    }
}


// CONTA I NODI CHE SI TROVANO AD UN CERTO LIVELLO 
int contaNodiLivello(TipoAlbero a, int l) {
    if (estVuoto(a)) 
        return 0;
    else if (l==0)
        return 1;
    else
        return contaNodiLivello(sinistro(a),l-1) +
               contaNodiLivello(destro(a),l-1);
}

// TROVA IL LIVELLO A CUI SI TROVA L'INFORMAZIONE X
// albero contenente tutti valori distinti
int trovaLivello(TipoAlbero a, TipoInfoAlbero x) {
    if (estVuoto(a))
        return -1;
    else if (radice(a)==x)
        return 0;
    else {
        int ls = trovaLivello(sinistro(a),x);
        int ld = trovaLivello(destro(a),x);
        if ((ls<0) && (ld<0))
            return -1;
        else
            return 1+std::max(ls,ld);
    }
}


// STAMPA IL LIVELLO A CUI SI TROVA L'INFORMAZIONE X
// (funzione ausiliaria)
void infoLivello_r(TipoAlbero a, TipoInfoAlbero x, int l) {
    if (estVuoto(a))
        return;
    else if (radice(a)==x)
        printf("info:%c livello:%d\n", x, l);
    else {
        infoLivello_r(sinistro(a), x, l+1);
        infoLivello_r(destro(a), x, l+1);
    }
}

// STAMPA IL LIVELLO A CUI SI TROVA L'INFORMAZIONE X
// (funzione principale)
void infoLivello(TipoAlbero a, TipoInfoAlbero x) {
    infoLivello_r(a, x, 0);
}

/*** Alberi binari di ricerca ***/

// Creazione albero ricerca da array ordinato
// (funzione ausiliaria)
TipoAlbero creaAlberoBinarioRicerca_r(const char *s, int kmin, int kmax) {
    if (kmin > kmax)
        return albBinVuoto();
    else if (kmin == kmax)
        return creaAlbBin(s[kmin], albBinVuoto(), albBinVuoto());
    else { // kmin < kmax
        int m = (kmax + kmin)/2;
        TipoAlbero ts = creaAlberoBinarioRicerca_r(s, kmin, m-1);
        TipoAlbero td = creaAlberoBinarioRicerca_r(s, m+1, kmax);
        return creaAlbBin(s[m], ts, td);
    }
}

// Creazione albero ricerca da array ordinato
// (funzione principale)
TipoAlbero creaAlberoBinarioRicerca(const char *s) {
    return creaAlberoBinarioRicerca_r(s, 0, strlen(s)-1);
}


// Stampa ordinata albero ricerca
// funzione ausiliaria (visita simmetrica)
void stampaAlbRic_r(TipoAlbero a) {
    if (estVuoto(a))
        return;
    else {
        stampaAlbRic_r(sinistro(a));
        printf("%c ", radice(a));
        stampaAlbRic_r(destro(a));
    }
}

// Stampa ordinata albero ricerca
// funzione principale
void stampaAlbRic(const char* astr, TipoAlbero a) {
    printf("Albero %s: ",astr);
    stampaAlbRic_r(a);
    printf("\n");
}

// Ricerca su albero binario di ricerca bilanciato  ->  O(log(n))
bool presenteAlbRic(TipoAlbero a, TipoInfoAlbero x) {
    if (estVuoto(a))
        return false;
    else if (x == radice(a))
        return true;
    else if (x < radice(a))
        return presenteAlbRic(sinistro(a),x);
    else // (x > radice(a))
        return presenteAlbRic(destro(a),x);
}

// Verifica bilanciato (accumulazione AND)
// Esercizio: Calcolare il costo di questa funzione
bool bilanciato(TipoAlbero a) {
    if (estVuoto(a))
        return true;
    else {
        int ps = profondita(sinistro(a));
        int pd = profondita(destro(a));
        return (abs(ps-pd)<=1) &&
               bilanciato(sinistro(a)) &&
               bilanciato(destro(a));
    }
}

// Lettura da file

void leggiParentesi(FILE *file_albero) {
  char c = ' ';
  while (c!='(' && c!=')')
    c = fgetc(file_albero);
}

TipoAlbero leggiSottoAlbero(FILE *file_albero) {
  char c;
  TipoInfoAlbero i;
  TipoAlbero r;

  leggiParentesi(file_albero);   /* legge la parentesi aperta */
  c = fgetc(file_albero);   /* carattere successivo */
  if (c == ')')
    return albBinVuoto();   /* se legge () allora l'albero e' vuoto */
  else {
    fscanf(file_albero, "%c", &i);   /* altrimenti legge la radice */

    /* legge i sottoalberi */
    TipoAlbero s = leggiSottoAlbero(file_albero);
    TipoAlbero d = leggiSottoAlbero(file_albero);

    r = creaAlbBin(i,s,d);

    leggiParentesi(file_albero);   /* legge la parentesi chiusa */

    return r;
  }
}


TipoAlbero leggiAlbero(char *nome_file) {
  TipoAlbero result;
  FILE *file_albero;
  file_albero = fopen(nome_file, "r");
  if (file_albero==NULL) {
      printf("File %s non trovato.\n",nome_file);
      return NULL;
  }
  result = leggiSottoAlbero(file_albero);
  fclose(file_albero);
  return result;
}



