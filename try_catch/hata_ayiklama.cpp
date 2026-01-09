#include <iostream>
using namespace std;

int main(){
    int bolunen;
    int bolen;
    cout << "Once bolunen sonra bolen sayiyi giriniz" << endl;
    cin >> bolunen;
    cin >> bolen;

    try{
        if(bolen == 0){
            throw 99;//Hata kodu fırlatma sonrasında hataya göre mesajlar vermemizi sağlar.
        }

        int result = bolunen / bolen;
        cout << "Sonuc; " << result << endl;
    }
    catch(int errorCode){
        cout <<"Gecerli sayilar giriniz? Hata kodu; " << errorCode << endl;
    }

}