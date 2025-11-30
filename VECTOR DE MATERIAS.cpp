#include <iostream>
using namespace std; 

int main (){
	int tam;
	cout<<"Ingrese el tamaño del arreglo:";
	cin>>tam;
    string *materias = new string[tam];
	for (int i=0; i < tam; i++){
		cout<<"Ingrese la materia: "<<i+1<<" ";
		cin>>materias[i];
	}
	cout<<"Materias ingresadas: "<<endl;;
	for (int i =0; i < tam; i++){
		cout<<materias[i]<<endl; 
	}
	return 0;
}
