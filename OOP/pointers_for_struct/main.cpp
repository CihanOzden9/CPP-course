#include <iostream>
#include <string>
using namespace std;

struct Konum
{
    int x;
    int y;
};


int main(){

    Konum point;

    Konum *ptr = &point;
    //Pointer kullanılarak bu formatta veri ataması yapılabilinir.
    ptr -> x = 10;
    ptr -> y  =15;
    

    cout << "X ve Y degerleri sirasiyla; " << ptr -> x << " " << ptr -> y << endl;
    cout << "X ve Y degerleri sirasiyla; " << point.x << " " << point.y << endl;


    return 0;
}