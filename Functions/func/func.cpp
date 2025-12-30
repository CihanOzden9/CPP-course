#include <iostream>
using namespace std;


// gelen parametreyi ekrana bastır ve 5 değerini return et
int func(int x){
    cout << x <<endl;
    return 5;
}

//Gelen parametrenin 5 fazlasını yazdır
void gFunc(int x){
    cout << x + 5<< endl;
}


int main(){
    //Önce giden parametreyi bastıracak
    //Sonra dönen değeri bastıracak
    cout << func(5) << endl;
    //İşlemler tekrarlanacak
    cout << func(19) << endl;

    //Giden değerin 5 fazlası bastırılacak.
    gFunc(20);

    return 0;
}