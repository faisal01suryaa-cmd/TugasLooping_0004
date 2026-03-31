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
    }
}