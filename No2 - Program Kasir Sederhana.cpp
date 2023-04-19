#include <iostream>
using namespace std;

int main() {
    int menu;
    int harga;
    int jumlah;
    int total_harga = 0;

    cout << "Program Kasir Sederhana\n";
    cout << "-----------------------\n";

    while(true) {
        cout<<"\nDaftar Menu\n";
        cout<<"1. Jasuke (Rp 10.000)\n";
        cout<<"2. Ice Cream Oreo Topping (Rp 15.000)\n";
        cout<<"3. Roti Isi Ikan Tuna (Rp 20.000)\n";
        cout<<"4. Selesai\n";

        cout<<"Pilih menu (1-4): ";
        cin>>menu;

        if(menu == 1) {
            harga = 10000;
        }
        else if(menu == 2) {
            harga = 15000;
        }
        else if(menu == 3) {
            harga = 20000;
        }
        else if(menu == 4) {
            break;
        }
        else {
            cout<<"Menu tidak tersedia\n";
            continue;
        }

        cout<<"Jumlah: ";
        cin>>jumlah;

        total_harga += harga * jumlah;
        cout<<"Total harga: Rp "<<total_harga<<endl;
    }
    
    cout<<"--------------------------------------------------------\n";
    cout<<"Total : Rp."<<total_harga<<endl;
    cout<<"Terima kasih telah menggunakan program kasir sederhana\n";
    return 0;
}
