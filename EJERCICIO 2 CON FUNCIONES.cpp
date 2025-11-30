#include <iostream>
using namespace std;

void pedirDimensiones (int &filas, int &columnas){
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
}

void llenarMatriz (int matriz[][10], int filas, int columnas){
	cout<<"Ingrese los valores de la mattriz: "<<endl;
 	for (int i=0; i<filas; i++){
 		for (int j=0; j<columnas; j++){
 		cout<<"Valor ["<<i<<"]["<<j<<"]: ";
	 	cin>>matriz[i][j];
 		}
	 }
 }
 void mostrarMatriz(int matriz[][10], int filas, int columnas){
 	cout<<"La matriz ingresada es: "<<endl;
 	for (int i=0; i<filas; i++){
	 	for (int j=0; j<columnas; j++){
	 	cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
  }
 }
 
 int main(){
 	int filas, columnas; 
 	pedirDimensiones(filas, columnas);
 	int matriz[10][10];
 	llenarMatriz(matriz, filas, columnas);
 	mostrarMatriz(matriz, filas, columnas);
 	return 0;
 }

 
 
