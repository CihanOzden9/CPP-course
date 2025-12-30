#include <iostream>
using namespace std;

int main(){

    int rn;//random sayımızı tutacak veriable
    srand(time(NULL));//seed
    rn = rand() % 6 + 1; // 1 - 6 arasında rassal değer döndürür.
    cout << rn << endl;

    return 0;
}