#include <iostream>

using namespace std;
//como me costo hacer esta cosa :(((
void cuenta (int numeros[], int t, int n){
    int rep=0;
    int k=0;
    for (int i = 0; i < t; i++)
    {
        if (n == numeros[i])
        {
            rep++;
            k = numeros[i];

        }
    } 
    cout<< "el numero " << "   " << k << " se repite" << "  " << rep << endl;
}

void elimina(int numeros[],int t, int n){
    for (int i = 0; i < t; i++)
    {
        if (n == numeros[i])
        {
            numeros[i] =0;
        } 
    }
}

int main(){
    int numeros[100], x, nveces=0;

    cout << "ingrese el numero de elementos del arreglo" << endl;
    cin >> x;

    for(int i=0; i<x; i++){
        cout << endl;
        cout << i+1 << "---digite un numero" << endl;
        cin >> numeros[i];
        
    }

    for(int i=0;i<x;i++){
        int n=numeros[i];
        if(n !=0){
            cuenta(numeros, x, n);
            elimina(numeros, x, n);
        }
    }


    
    




    return 0;
}