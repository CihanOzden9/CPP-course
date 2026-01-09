#include <iostream>
#include <fstream> //Dosya okumak için gerekli kütüphane dahil edildi
#include <string>
using namespace std;

int main(){

    ofstream file; //File objesi oluşturuldu
    file.open("Notes.txt"); //Dosya okundu eğer yoksa oluşturuldu.

    if (file.is_open()){ //Dosya bağlantısı sağlandı mı kontrolü.
        cout << "File is connected." << endl;
        file << "Bağlandı.\n"; //Dosya içeriğine mesaj yazıldı.
        file.close();//Dosya kapatıldı.
    } 

    string line;
    ifstream file2 ("Notes.txt");
    if (file2.is_open()){
        while( getline(file2,line)){
            cout << line << "\n";
        }
        file2.close();
    }

    return 0;



}