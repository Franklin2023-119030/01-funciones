#include<bits/stdc++.h>
using namespace std;
int sumar(int n){
    int suma=0;
    for (int i=1; i<=n; i++){
        suma+= i;
    }
    return suma;
}
int main(){
    int n;
    cout<<"Ingresa un numero: ";
    cin>>n;
    int resultado=sumar(n);
    cout<<"La suma de los numeros desde 1 hasta " <<n<< " es: " <<resultado<< endl;
    return 0;
}