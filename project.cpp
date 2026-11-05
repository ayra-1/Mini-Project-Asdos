#include <iostream>
#include <string>
using namespace std;


int JumlahMenu = 16;

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

        for (int i = 0; i < JumlahMenu; i++) {
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

int main () {

    string nama[16] = {}
    "Ayam Geprek",
    "Mie ayam",
    "Martabak Manis",
    "Nasi Bakar",
    "Nasi Goreng",
    "Ketoprak",
    "Soto",
    "Sate Ayam",
    "Roti Bakar",
    "Batagor",
    "Bubur Kacang Ijo",
    "Nasi Uduk",
    "Bubur Ayam",
    "Susu",
    "Buah",
    "Nasi Bakar"
};

int harga[16] = {
    10000,
    10000,
    40000,
    10000,
    12000,
    15000,
    13000,
    8000,
    19000,
    6000,
    5000,
    7000,
    10000,
    7000,
    10000,
    11000,
};