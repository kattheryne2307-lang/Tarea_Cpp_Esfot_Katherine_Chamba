#include <iostream>
using namespace std;

void llenarPaises (string arr[]){
 
 	for (int i=0; i<5; i++){
 		cout<<"Ingrese el pais: "<<i+1<<" ";
	 	cin>>arr[i];
	 }
 } 
 void llenarPrecios (int arr[]){

 	for (int i=0; i<5; i++){
 		cout<<"Ingrese el precio del vuelo: "<<i+1<<" ";
	 	cin>>arr[i];
	 }
 }
 void nombre (){
 	cout<<"Katherine Chamba";
 }
 
 int main(){
 	string paises[5];
 	int precios[5];
 	llenarPaises(paises);
 	llenarPrecios(precios);
 	nombre();
 	return 0;
 }
 
