#include <iostream>
#include <string>
using namespace std;


int JumlahMenu = 28;

void tampilkanMenu(string nama[], int harga[]) {

    cout << "\n=== DAFTAR MENU MAKANAN ===\n";

    for (int i = 0; i < JumlahMenu; i++) {
        cout << i + 1 << ". " << nama[i];
        cout << " - Rp " << harga[i] << endl;
    }
}  

void bubbleSort(string nama[], int harga[]) {
    for (int i = 0; i < JumlahMenu - 1; i++) {
        for (int j = 0; j < JumlahMenu - 1 - i; j++) {
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
string nama [28] = {
    "Nasi Goreng",
    "Mie Ayam",
    "Telur Rebus",
    "Ayam Geprek",
    "Roti Bakar",
    "Nasi Uduk",
    "Tempe Goreng",
    "Bubur Ayam",
    "Soto",
    "Bakso",
    "Ayam Bakar",
    "Seblak",
    "Pecel Lele",
    "Mie Instan + Telur",
    "Sayur Sop",
    "Sayur Kangkung",
    "Nasi Padang", 
    "Sate Ayam",
    "Orek Tempe",
    "Nasi Bakar",
    "Roti Bakar",
    "Martabak Manis",
    "Buah Potong",
    "Susu",
    "Mie Tek-tek",
    "Risol",
    "Rice Bowl",
    "Takoyaki",
};

int harga [28] = {
    12000,
    10000,
    5000,
    15000,
    8000,
    7000,
    4000,
    9000,
    11000,
    12000,
    20000,
    15000,
    15000,
    7000,
    5000,
    5000,
    10000,
    15000,
    5000,
    13000,
    12000,
    15000,
    5000,
    7000,
    14000,
    3000,
    15000,
    10000,
};

int pilihan;

do {

    cout << "\n=== MENU UTAMA ===\n";
    cout << "1. Tampilkan Daftar Menu\n";
    cout << "2. Cari Menu Sesuai Anggaran\n";
    cout << "3. Keluar\n";
    cout << "Pilih menu: ";

    cin >> pilihan;

     switch (pilihan) {
        case 1:
                tampilkanMenu(nama, harga);
                break;

            case 2:
                cariMenu(nama, harga);
                break;

            case 3:
                cout << "Terima kasih!\n";
                break;

            default:
                cout << "Pilihan tidak tersedia!\n";
        }
     } while (pilihan != 3);

     return 0;
}