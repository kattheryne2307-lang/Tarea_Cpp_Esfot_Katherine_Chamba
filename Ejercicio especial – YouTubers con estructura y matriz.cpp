#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct YouTuber {
    string nombre;
    string categoria;
    int suscriptores;   // en millones
    int ganancias;      // mensuales generadas
};

int main() {
    srand(time(0));

    const int FILAS = 2;
    const int COLS = 3;

    YouTuber yt[FILAS][COLS] = {
        {
            {"AuronPlay", "Gaming", 30, 0},
            {"Dross", "Terror", 22, 0},
            {"Kika Nieto", "Lifestyle", 9, 0}
        },
        {
            {"MrBeast", "Entretenimiento", 200, 0},
            {"Ibai", "Gaming", 14, 0},
            {"Yuya", "Belleza", 25, 0}
        }
    };

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLS; j++){
            int pago = rand() % (8000 - 3000 + 1) + 3000;
            yt[i][j].ganancias = yt[i][j].suscriptores * pago;
        }
    }

    string buscar;
    cout << "Categoria a buscar: ";
    cin >> buscar;

    int totalSuscriptores = 0;
    long long totalGanancias = 0;

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLS; j++){
            totalSuscriptores += yt[i][j].suscriptores;
            totalGanancias += yt[i][j].ganancias;

            if(yt[i][j].categoria == buscar){
                cout << "Encontrado en posicion [" << i << "][" << j << "]: ";
                cout << yt[i][j].nombre << " (" << yt[i][j].suscriptores << "M)" << endl;
            }
        }
    }

    cout << "Total suscriptores: " << totalSuscriptores << " millones" << endl;
    cout << "Total ganancias mensuales: $" << totalGanancias << endl;

    return 0;
}
