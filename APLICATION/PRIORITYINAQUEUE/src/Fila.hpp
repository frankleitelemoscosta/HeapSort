#ifndef FILA_HPP 
#define FILA_HPP

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string>

typedef struct Item Item;
typedef struct Block Block;
typedef struct Fila Fila;

using namespace std;

struct Item{
	string 	name;
	signed short int age;
	signed short int Weight;
};

struct Block{
	Item data;
	Block *prox;
};

struct Fila{
	Block *first;
	Block *last;
};


void FFVazia(Fila *f);
void Enfileira(Fila *f, Item d);
void Desenfileira(Fila *f, Item *d);
void FImprime(Fila *f);

#endif

//end code