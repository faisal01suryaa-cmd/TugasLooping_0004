#include <iostream>
using namespace std;

// variabel global
int angka, pilihan;

// untuk menginputkan angka yang akan di cek
void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

// mengecek bilangan prima dengan bool menggunaka  while loop
bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
     while (i * i <= n){
         if (n % i == 0) return false;
         i++;
     }
     return true;
}

// mengecek bilangan Finoacci dengan bool menggunakan while loop
bool isFibonacci(int n) {
    if (n < 0) return false ;
    int a = 0, b = 1;
    while (a < n){
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}

// menampilkan hasil pengecekan
void tampilkanHasil(string jenis, bool hasil) {
    if (hasil) {
        cout << "Hasil: " << angka << " adalah " << jenis << "." << endl;
    } else {
        cout << "Hasil: " << angka << " BUKAN " << jenis << "." << endl;
    }
}

// untuk menampilkan menu
void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

int main() {
    while (true) {
        tampilkanMenu();

         // switch case untuk pilihan menu
        switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanHasil("Bilangan Prima", isPrima(angka));
                break;
        
            case 2:
                inputAngka();
                tampilkanHasil("Bilangan Fibonacci", isFibonacci(angka));
                break;

            case 0:
                cout << "Keluar dari program. Terima kasih!" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid." << endl;
                break;


    }
}
}