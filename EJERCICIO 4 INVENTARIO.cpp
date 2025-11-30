#include <iostream>
using namespace std;

void llenarDatos(string productos[], int inicial[], int vendido[], int n){
    cout << "Ingrese: producto, stock inicial y vendido:" << endl;
    for(int i = 0; i < n; i++){
        cin >> productos[i];
        cin >> inicial[i];
        cin >> vendido[i];
    }
}

void calcularStock(int inicial[], int vendido[], int finalStock[], int n){
    for(int i = 0; i < n; i++){
        if(vendido[i] > inicial[i]) finalStock[i] = -1;
        else finalStock[i] = inicial[i] - vendido[i];
    }
}

void mostrarResultados(string productos[], int finalStock[], int n){
    for(int i = 0; i < n; i++){
        if(finalStock[i] == -1) cout << productos[i] << " ERROR" << endl;
        else cout << productos[i] << " " << finalStock[i] << endl;
    }
}

int main(){
    int n = 3;
    string productos[3];
    int inicial[3], vendido[3], finalStock[3];

    llenarDatos(productos, inicial, vendido, n);
    calcularStock(inicial, vendido, finalStock, n);
    mostrarResultados(productos, finalStock, n);

    return 0;
}

