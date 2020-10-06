#include<iostream>

using namespace std;

int main(){
    int x, y, aux;

    cout<<"Digite el precio del primer valor: ";
    cin>>x;
    cout<<"Digite el precio del segundo valor: ";
    cin>>y;

    aux = x;
    x = y;
    y = aux;

    /* Otra forma para no usar memoria extra con otra variable:
    x = x+y;
    y = x-y;
    x = x-y;
    */
   cout<<x<<" "<<y<<endl;
   return 0;
}