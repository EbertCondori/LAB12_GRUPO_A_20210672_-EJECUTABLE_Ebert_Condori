/*
//EJERCICIO 1
#include <iostream>
using namespace std;
class Nodo {
public:
	Nodo(int,Nodo * =NULL);
	friend class Cola;
private:
	int valor;
	Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
	valor = v;
	sig =s;
}
class Cola {
public:
	Cola();
	~Cola();
	void insertar(int);
	void imprimir();
private:
	Nodo* cabeza;
};
Cola::Cola() {
	cabeza = NULL;
}
Cola::~Cola()
{
	Nodo *temp = cabeza;
	Nodo *borrar;
	while(temp != NULL)
	{
		borrar = temp;
		
		temp = temp->sig;
		delete borrar;
	}
	cabeza = NULL;
}

void Cola::insertar(int v)
{
	Nodo *nuevo = new Nodo(v);
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else{
		Nodo *aux = cabeza;
		while(aux->sig !=NULL)
		{
			aux=aux->sig;
		}
		aux->sig=nuevo;
	}
}

void Cola::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}

int main(int argc, char *argv[])
{
	Cola *listaA;
	
	listaA = new Cola();
	
	listaA->insertar(1);
	listaA->insertar(2);
	listaA->insertar(3);
	listaA->insertar(4);
	listaA->insertar(5);
	listaA->imprimir();
	
	delete listaA;
	return 0;
}
*/

/*

//EJERCICIO 2
#include <iostream>
using namespace std;
class Nodo {
public:
Nodo(int,Nodo * =NULL);
friend class Cola;
private:
int valor;
Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
valor = v;
sig =s;
}
class Cola {
public:
Cola();
~Cola();
void insertar(int);
void sacar_elemento(int);
void buscar_elemento(int);
void imprimir();
private:
Nodo* cabeza;
};
Cola::Cola() {
cabeza = NULL;
}
Cola::~Cola()
{
Nodo *temp = cabeza;
Nodo *borrar;
while(temp != NULL)
{
borrar = temp;

temp = temp->sig;
delete borrar;
}
cabeza = NULL;
}

void Cola::insertar(int v)
{
Nodo *nuevo = new Nodo(v);
if(cabeza == NULL)
{
cabeza = nuevo;
}
else{
Nodo *aux = cabeza;
while(aux->sig !=NULL)
{
aux=aux->sig;
}
aux->sig=nuevo;
}
}


void Cola::sacar_elemento(int v)
{
Nodo *temp = cabeza;

Nodo *aux = new Nodo(v);

if(temp->valor == v){
cabeza = NULL;
//temp=temp->sig;
while(temp!=NULL){
temp=temp->sig;
cout<<temp->valor<<"-";
}
}
else{

while(temp != NULL){
if(temp->valor != v){
cout<<temp->valor<<"-";
}     
temp=temp->sig;
}
}

}

void Cola::imprimir()
{
Nodo *temp = cabeza;
while(temp!=NULL)
{
cout << temp->valor << "-";
temp = temp->sig;
}
cout << "\n";
}

int main(int argc, char *argv[])
{
Cola *listaA;

listaA = new Cola();

listaA->insertar(1);
listaA->insertar(2);
listaA->insertar(3);
listaA->insertar(4);
listaA->insertar(5);
listaA->imprimir();
listaA->sacar_elemento(3);
delete listaA;
return 0;
}


*/

/*

//EJERCICIO 3
#include <iostream>
using namespace std;
class Nodo {
public:
Nodo(int,Nodo * =NULL);
friend class Cola;
private:
int valor;
Nodo *sig;
};
Nodo::Nodo(int v,Nodo *s)
{
valor = v;
sig =s;
}
class Cola {
public:
Cola();
~Cola();
void insertar(int);
void sacar_elemento(int);
void buscar_elemento(int);
void imprimir();
private:
Nodo* cabeza;
};
Cola::Cola() {
cabeza = NULL;
}
Cola::~Cola()
{
Nodo *temp = cabeza;
Nodo *borrar;
while(temp != NULL)
{
borrar = temp;

temp = temp->sig;
delete borrar;
}
cabeza = NULL;
}

void Cola::insertar(int v)
{
Nodo *nuevo = new Nodo(v);
if(cabeza == NULL)
{
cabeza = nuevo;
}
else{
Nodo *aux = cabeza;
while(aux->sig !=NULL)
{
aux=aux->sig;
}
aux->sig=nuevo;
}
}


void Cola::sacar_elemento(int v)
{
Nodo *temp = cabeza;

Nodo *aux = new Nodo(v);

if(temp->valor == v){
cabeza = NULL;
//temp=temp->sig;
while(temp!=NULL){
temp=temp->sig;
cout<<temp->valor<<"-";
}
}
else{

while(temp != NULL){
if(temp->valor != v){
cout<<temp->valor<<"-";
}     
temp=temp->sig;
}
}

}

void Cola::buscar_elemento(int v){
Nodo *temp = cabeza;

if(temp->valor == v){
cout<<"si esta el elemento "<<v<<endl;
}
else{
while(temp !=NULL){
temp=temp->sig;
if(temp-> valor ==v){
cout<<"si esta el elemento "<<v<<endl;
}
}
}

}
void Cola::imprimir()
{
Nodo *temp = cabeza;
while(temp!=NULL)
{
cout << temp->valor << "-";
temp = temp->sig;
}
cout << "\n";
}

int main(int argc, char *argv[])
{
Cola *listaA;

listaA = new Cola();

listaA->insertar(1);
listaA->insertar(2);
listaA->insertar(3);
listaA->insertar(4);
listaA->insertar(5);
listaA->imprimir();
listaA->buscar_elemento(3);
delete listaA;
return 0;
}

*/
