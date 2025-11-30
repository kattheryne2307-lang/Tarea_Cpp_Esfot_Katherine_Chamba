#include <iostream>
using namespace std;

int main(){
	 string *equipos = new string[4];
	int puntajes[4];
	for (int i=0; i <4; i++){
		cout<<"Ingrese el nombre del equipo: "<<i+1<<" ";
		cin>>equipos[i];
	}
	for (int i=0; i<4; i++){
			cout<<"Ingrese los puntajes: "<<i+1<<" ";
			cin>>puntajes[i];
		}
	
	cout<<"Los equipos son: "<<endl;
	for (int i=0; i<4; i++){
		cout<<equipos[i]<<endl;
	}
	cout<<"Los puntajes son: "<<endl;
		for (int i=0; i<4; i++){
			cout<<puntajes[i]<<endl;
		}

	return 0;
}
