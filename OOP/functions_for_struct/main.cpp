#include <iostream>
#include <string>
using namespace std;

//Öğrenciler nesnesi tanımlandı.
struct Students
{
    string name;
    int note;
};

//gelen listedeki öğrencileri ekrana bastırıypruz.
void studentWriter(Students students[], int size){
    cout << "------ Ogrenciler ---------" << endl;
    for (int i = 0; i < size; i++){
        //Temiz kod için değişkenleri sabitlere aktarıyoruz.
        string name = students[i].name;
        int note = students[i].note;
        cout << name << " " << note << endl;
    }
}


int main(){
    //nesne oluşturuldu
    Students students[3] = {
        {"Cihan",52},
        {"Arda", 56},
        {"Kerem",90}
    };
    //Fonskiyona veriler gönderildi.
    studentWriter(students, 3);

    return 0;
}