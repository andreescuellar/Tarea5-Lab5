//============================================================================
// Name        : Tarea5_Lab5.cpp
// Author      : Andrés Cuéllar
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;

};

// Prototipos de Funciones
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);

Nodo *lista = NULL;

int main() {
	int dato;

	cout<<"Ingrese un numero: "<< endl;
	cin>>dato;
	insertarLista(lista,dato);

	cout<<"Ingrese un numero: "<< endl;
	cin>>dato;
	insertarLista(lista,dato);

	cout<<"Ingrese un numero: "<< endl;
	cin>>dato;
	insertarLista(lista,dato);

	mostrarLista(lista);



	return 0;
}


void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;

	Nodo *aux1 = lista;
	Nodo *aux2;

	while ((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}

	if(lista == aux1){
		lista = nuevo_nodo;
	}else{
		aux2->siguiente = nuevo_nodo;
	}

	nuevo_nodo->siguiente = aux1;

	cout<<"\tElemento " <<n<< " ha ingresado correctamente \n\n";
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;

	cout<<"La Lista ya ordenada en orden creciente es: \n ";
	while (actual != NULL){

		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;

	}

}






