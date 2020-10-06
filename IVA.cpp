/*Escriba un programa que de la entrada estándar el precio de un producto y muestre en la salida estándar el
precio del producto al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main(){
    float precio, pF, IVA;
    cout<<"Digie el precio del producto: ";
    cin>>precio;

    IVA = precio*0.16;
    pF = precio+IVA;

    cout<<"\n El precio final al aplicarle el IVA es: "<<pF;

    return 0;
}