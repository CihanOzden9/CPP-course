#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    
    
    // a = *p #DEĞER
    // &a = p #ADRES

    cout << "a; " << a << endl;
    cout << "*p; " << *p << endl;
    cout << "p; " << p << endl;
    cout << "&a; " << &a << endl;

}