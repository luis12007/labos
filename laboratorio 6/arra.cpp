#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int arreglo1[100], arreglo2[100], arreglo3[100], x;

    cout << "ingrese la longitud de los arreglos" << endl;
    cin >> x;

cout<< endl << "ingrese los numeros del primer arreglo" << endl;


    for(int i=0; i<x; i++){
        cout << endl;
        cout << i+1 << "---digite un numero: ";
        cin >> arreglo1[i];
    }

    cout<< endl << "ingrese los numeros del segundo arreglo" << endl;


        for(int i=0; i<x; i++){
        cout << endl;
        cout << i+1 << "---digite un numero: ";
        cin >> arreglo2[i];
    }

    for(int i=0;i<x;i++){
        arreglo3[i] = arreglo1[i] + arreglo2[i];
        cout << "la suma de: " << arreglo1[i] << " y " << arreglo2[i] << " es: " << arreglo3[i] <<endl;    

    }

return 0;
}