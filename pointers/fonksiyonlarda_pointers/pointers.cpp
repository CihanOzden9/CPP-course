#include <iostream>
using namespace std;


int g(int x){//Fonksiyoan gelen değişkenin değeri sadece yerelde değiştirilecek.
    x = 20;
    return x;
}

int f(int *x){//Fonksiyona ne gelirse gelsin değişkenin değeri 50 olarak globalde değiştirilecek.
    *x = 50;
    return *x;
}

int main(){
    int a = 1;
    int *p;
    p = &a;
    cout << a << endl;
    cout << f(p) << endl;
    cout << g(a) << endl;


cout << "Malloc kullanimi" << endl;
    // MALLOC KULLANIMI

    int *c  = (int *) malloc(sizeof(int)*3); // 3 elemanlı bir dizi için bellekte yer aç
    c[2] = 3;
    c[0] = 1;
    c[1] = 21;
    cout << c[2] << endl;
    cout << c[0] << endl;
    cout << c[1] << endl;

    return 0;
}