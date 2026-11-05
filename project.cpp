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
    for (int i = 0; i < JumlahMenu; i++) {
        for (int j = 0; j < JumlahMenu - 1; j++) {
            if (harga[j] > harga[j + 1]) {
                
                int sementara = harga[j];
                harga[j] = harga[j + 1];
                harga[j + 1] = sementara;

                
                string sementaraNama = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = sementaraNama;
            }
        }
    }
}

void cariMenu(string nama [], int harga[]) {
    
    int anggaran;
    int ditemukan = 0;

    cout << "\nMasukkan anggaran kamu: Rp ";
    cin >> anggaran;

    if (anggaran <= 0) {
        cout << "Anggaran tidak valid!\n";
    }
    else {

        bubbleSort(nama, harga);

        cout << "\n=== MENU SESUAI ANGGARAN ===\n";

        for (int i = 0; i < jumlahMenu; i++) {
            if (harga[i] <= anggaran) {

                cout << nama[i];
                cout << " - Rp " << harga[i] << endl;

                ditemukan = 1;
            }
        }

        if (ditemukan == 0) {
            cout << "Tidak ada menu yang sesuai.\n";
        }
    }
}