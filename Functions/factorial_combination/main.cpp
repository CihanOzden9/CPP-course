#include <iostream>
using namespace std;

int factorial(int x){
    int result = 1;
    for (int i=1; i<=x; i++){
        result *= i;
    }
    return result;
}

int combination(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main(){

    cout << factorial(5) << endl;
    cout << combination(5,2) << endl;

    return 0;
}
