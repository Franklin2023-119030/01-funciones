#include<iostream>
using namespace std;
int multiplicacion(int cantidad){
    int producto=1;
    for(int i=0; i<cantidad; ++i){
        int numero;
        cout<<"Ingrese el numero "<<(i+1)<<": ";
        cin>>numero;
        producto*=numero;
    }
    return producto;
}
int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros que desea multiplicar: ";
    cin>>n;
    if(n<=0){
        cout<<"La cantidad de numeros debe ser mayor que cero."<<endl;
        return 1;
    }
    int resultado=multiplicacion(n);
    cout<<"La multiplicacion de los numeros ingresados es: "<<resultado<<endl;
    return 0;
}
