#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    char k = 'A';
    cout<<"Masukkan Angka: ";
    cin>>n;

     if(n<=26 and n>0){
    for (i = n; i >= 1; i--) {
        if (i == n) {
            for (j = 2; j <= i; j++) {
                cout << k++;
            }
            for (j = 1; j <= i; j++) {
                cout << k--;
            } 
            k--;
        } else {
            for (j = 1; j <= i; j++) {
                cout << k++;
            }
            k--;
            for (j = 1; j <= (n - i) * 2 - 1 ; j++) {
                cout << " ";
            }
            for (j = 1; j <= i; j++) {
                cout << k--;
            }
        }
        k = 'A';
        cout << endl;
    }
    }

    return 0;
}