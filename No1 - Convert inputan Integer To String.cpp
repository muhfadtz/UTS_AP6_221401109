#include <iostream>
#include <string>
using namespace std;

int main() {
   // Input integer
   int bil;
   cout<<"Masukkan integer: ";
   cin>>bil;

   // Mengonversi integer menjadi string menggunakan fungsi to_string()
   string n = to_string(bil);

   // Output string
   cout<<"Output String: "<<n<<endl;
   return 0;
}
