#include <iostream>
using namespace std;

int main() {
    string nombres[2] = {"Ana", "Juan"};
    int notas[2][4] = {
        {3, 4, 5, 10},
        {10, 9, 6, 10}
    };
    
    for(int i = 0; i < 2; i++){
        int suma = 0;
        for(int j = 0; j < 4; j++){
            suma += notas[i][j];
        }
        float promedio = suma / 4.0;
        cout << nombres[i] << ": " << promedio << endl;
    }

    return 0;
}
