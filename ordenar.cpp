#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int* ordenar(int tam){

	int tam1,aux;
	int arreglo[tam],dato;
	for(int i=0;i<tam;i++){
	//	srand(time(NULL));
	//	dato = rand()% (101-1);
		dato = tam-i;
		arreglo[i]=dato;
//		tam1 = i;
		
		for(int j=0; j<i; j++){
			if(dato<arreglo[j]){
				aux =arreglo[j];
				arreglo[j] = dato;
				dato = aux;
			}else{
				aux = arreglo[j+1];
				arreglo[j+1] = dato;
				dato = aux; 
			}
		}
//		arreglo[i+1] = dato;
	}
	for (int i=0;i<tam;i++){
		cout<<arreglo[i]<<endl;
	}
}


int main(){
	int tam;
	cout<<"Ingrese el tamano";
	cin>>tam;
	if (tam %2 ==0){
		tam=7;
	}
	ordenar(tam);
}
