#include <iostream>
using namespace std;

int main(){

    int x[3] = {1,2,3};

    int *p;
    p = x;

    cout << p[2] << endl; //Burada 3 olan değer ekrana yazdırılır.
    p[2] = 9; //Değer değiştirilir.
    cout << x[2] << endl; //Yeni değer ekrana yazdırılır.


    return 0;
}