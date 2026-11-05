#include <iostream>
#include <string>
using namespace std;


int JumlahMenu = 0;

void tampilkanMenu(string nama[], int harga[]) {

    cout << "\n=== DAFTAR MENU MAKANAN ===\n";

    for (int i = 0; i < JumlahMenu; i++) {
        cout << i + 1 << ". " << nama[i];
        cout << " - Rp " << harga[i] << endl;
    }
}

void bubbleSort(string nama[], int harga[]) {
    for (int i = 0; i < JumlahMenu; i++);
    
}