#include<iostream>
using namespace std;
int factorial(int n){
    int resp=1;
    for(int i=1; i<=n; ++i){
        resp*=i;
    }
    return resp;
}
int main(){
    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    if(n<0){
        cout<<"El factorial no está definido para números negativos." << endl;
    } 
	else{
        cout<<"El factorial de "<<n<<" es: "<<factorial(n)<<endl;
    }
    return 0;
}