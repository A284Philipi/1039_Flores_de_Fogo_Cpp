#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int raio_cir, raio_flor, x_cir, y_cir, x_flor, y_flor, cont; // variavéis da entrada
    double distancia;
    while (cin >> raio_cir){ // entrada EOF
        cin >> x_cir;
        cin >> y_cir;
        cin >> raio_flor;
        cin >> x_flor;
        cin >> y_flor;
        distancia = sqrt(pow(x_flor - x_cir,2) + pow(y_flor - y_cir,2));
        if (raio_cir >= distancia + raio_flor){
            cout << "RICO" <<endl;
        }else{
            cout << "MORTO" <<endl;
        }
    }
    return 0;
}
