#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;
    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;
    float z = x+y;
    cout << "la suma de "<<x<<"+"<<y <<" es: " << z << endl;
    cout<<endl;
    cout<<"Ingrese el nuevo valor de x: ";
    cin>>x;
    cout<<"Ingrese el nuevo valor de y: ";
    cin>>y;
    z = x-y;
    cout << "la resta de "<<x<<"-"<<y <<" es: " << z << endl;
    cout<<endl;
    cout<<"Ingrese el nuevo valor de x: ";
    cin>>x;
    cout<<"Ingrese el nuevo valor de y: ";
    cin>>y;
    z = x*y;
    cout << "la multiplicacion de "<<x<<"*"<<y<<" es:" << z << endl;
    cout<<endl;
    cout<<"Ingrese el nuevo valor de x: ";
    cin>>x;
    cout<<"Ingrese el nuevo valor de y: ";
    cin>>y;
    z = x/y;
    cout << "la division de "<<x<<"/"<<y<<" es:" << z << endl;

    return 0;
}
