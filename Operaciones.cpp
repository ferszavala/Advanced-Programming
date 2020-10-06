/*Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, 
resta, multiplicación y división.*/

#include<iostream>

using namespace std;

int main(){
    int n1=0, n2=0, suma=0, resta=0;
    double multiplicacion=0, division=0;
    cout<< "Digite numero uno"; cin>>n1;
    cout<< "Digite numero dos"; cin>>n2;

    suma = n1+n2;
    resta = n1-n2;
    multiplicacion = n1*n2;
    division = n1/n2;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es; "<<division<<endl;

    return 0;
}