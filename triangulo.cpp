/*Escriba un programa que lea de la entrada estándar de los dos catetos de un triángulo
rectángulo y escriba en la salida estándar su hipotenusa*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double c1=0, c2=0, hip=0;
    cout<< "Digite la medida del primer cateto: "; cin>>c1;
    cout<< "Digite la medida del segundo cateto: "; cin>>c2;

    hip = sqrt((c1*c1)+(c2*c2));

    cout<<"La medida de la hipotenusa es: "<<hip<<endl;

    return 0;
}