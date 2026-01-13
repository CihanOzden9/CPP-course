#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int no;
};

int main(){
    //3 Adet nesne oluşturuldu.
    Student students[3];

    //Nesnelerin özellikleri sırasıyla verildi.
    for(int i=0; i<3;i++){
        cout <<"Ad; ";
        getline(cin, students[i].name);
        cout << "No; ";
        cin >> students[i].no;
        cin.ignore();
    }

    //Ekrana bastırıldı.
    for(int i=0; i<3;i++){
        cout <<i+1<<". Ogrenci ad ve no; " << students[i].name << " "<< students[i].no << endl;
    }
    return 0;
}