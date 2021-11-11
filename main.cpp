#include <iostream>
using namespace std;

int main() {
    int n;
    int fibon=1;
    int fib=0;
    cin >> n;

    if (n>=2){

        cout << "1" << endl;

        for (int i=1;i<n; i++){

            fibon=fibon+fib;
            fib=fibon-fib;

            cout << fibon <<endl;

        }

    } else {
        cout << "errore" << endl;
    }

   return 0;
}
