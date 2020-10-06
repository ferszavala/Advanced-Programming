/*Realice un programa que calcule el valor que toma la siguiente función para unos valores dados
x e y: f(x,y)=sqrt(x)/(pow(y,2)-1)*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double x=0, y=0, res=0;
    cout<< "Digite el valor de x: "; cin>>x;
    cout<< "Digite el valor de y: "; cin>>y;

    res = sqrt(x)/(pow(y,2)-1);

    cout<<"La función da con esos valores de x e y: "<<res<<endl;

    return 0;
}