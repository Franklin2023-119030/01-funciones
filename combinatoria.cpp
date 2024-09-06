#include <iostream>
using namespace std;

int factorial(int n){
    int result=1;
    for (int i=1; i<=n; ++i){
        result*=i;
    }
    return result;
}

int combinatoria(int n, int m) {
    if (m>n) 
	return 0;
    if (m==0 || m==n) return 1;
    return factorial(n)/(factorial(m)*factorial(n - m));
}

int main(){
    int n, m;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    cout<<"Ingrese el valor de m: ";
    cin>>m;
    cout<<"C("<<n<<", "<<m<<")="<< combinatoria(n, m) << endl;
    return 0;
}

