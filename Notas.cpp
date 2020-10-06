#include<iostream>

using namespace std;

int main(){
    float n1, n2, n3, final;

    cout<<"Ingrese nota1: "<<endl;
    cin>>n1;
    cout<<"Ingrese nota2: "<<endl;
    cin>>n2;
    cout<<"Ingrese nota3: "<<endl;
    cin>>n3;

    final = (n1+n2+n3)/3;

    cout<<"La final media es: "<<final;

    return 0;
}