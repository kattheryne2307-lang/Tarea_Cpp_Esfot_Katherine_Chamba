#include <iostream>
using namespace std;

int totalVentas(int ventas[], int i, int n){
    if(i == n) return 0;
    return ventas[i] + totalVentas(ventas, i + 1, n);
}

int main(){
    int ventas[5] = {100, 200, 150, 300, 250};
    int total = totalVentas(ventas, 0, 5);
    cout << total;
    return 0;
}
