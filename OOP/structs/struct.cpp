#include <iostream>
using namespace std;

//Tanımlaması yapılıp özellikleri veriliyor
struct Points {
    int x;
    int y;
};

struct Rectangle {
    int width;
    int height;
};

int main(){
    //Nesne oluşturuluyor özellikleri veriliyor.
    Points pt;
    pt.x = 10;
    pt.y = 22;

    Rectangle rect;
    rect.height = 21;
    rect.width = 30;

    //Veriler sıralı olarak liste şeklinde verilebilir.
    Rectangle rect2 = {30, 40};

    cout << "pt x ve ye; " << pt.x << " "<< pt.y << endl;
    cout << "rect width ve height; " << rect.width << " "<< rect.height;


    return 0;
}