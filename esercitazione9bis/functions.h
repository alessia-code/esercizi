//INTESTAZIONI FUNZIONI MIE E STRUCTS
#pragma once
#include <stdio.h>
typedef int T ;
struct NodoSCL {
	T info ;
	struct NodoSCL* next;
};
typedef struct NodoSCL TipoNodo;
typedef TipoNodo* Insieme;


Insieme insiemeVuoto();
Insieme inserisci(Insieme ins , T e);
bool estVuoto(Insieme ins);
bool membro(Insieme ins , T e);
