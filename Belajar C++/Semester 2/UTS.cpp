#include <iostream>
using namespace std;

//PROVIDER
enum Provider{telkomsel, XL, indosat};

string konversiProvider(Provider p){
    switch (p){
    case telkomsel: return "Telkomsel";
    case XL: return "XL";
    case indosat: return "Indosat";
    default: return "Provider tidak ada !!!!";
    }
}

//STRUCT PULSA
struct Pelanggan{
    string nama;
    Provider provider;
    int nominal;
    int harga;
};

int hitungNominal(int pilihan){
    switch(pilihan){
    case 1: return 10000;
    case 2: return 25000;
    case 3: return 50000;
    case 4: return 100000;
    }
return 0;
}

int hitungHarga(int pilihan){
    switch(pilihan){
    case 1: return 12000;
    case 2: return 27000;
    case 3: return 52000;
    case 4: return 105000;
    }
return 0;
}

int main() {
    Pelanggan pelanggan[100];
    int pilihan, harga, nominal, pilihProvider, jumlahPembelian;
    int totalNominal=0;
    int totalBayar=0;
    char ulangMenu;

    cout << "Masukkan nama = ";
    getline(cin,pelanggan[0].nama);

    cout << "\n==== PILIHAN PROVIDER ====\n";
    cout << "1. Telkomsel\n";
    cout << "2. XL\n";
    cout << "3. Indosat\n";
    cout << "Pilih provider = ";
    cin >> pilihProvider;

    cout << "\nMasukkan jumlah pembelian = ";
    cin >> jumlahPembelian;

for (int i=0; i<jumlahPembelian; i++){
pelanggan[i].nama=pelanggan[0].nama;
pelanggan[i].provider=(Provider)(pilihProvider-1);
    cout << "\n==== NOMINAL PULSA ====\n";
    cout << "1. Rp 10.000\n";
    cout << "2. Rp 25.000\n";
    cout << "3. Rp 50.000\n";
    cout << "4. Rp 100.000\n";
    cout << "Masukkan nominal pulsa = ";
    cin >> nominal;
pelanggan[i].nominal=hitungNominal(nominal);
totalNominal+=pelanggan[i].nominal;
pelanggan[i].harga=hitungHarga(nominal);
totalBayar+=pelanggan[i].harga;
}


    cout << "\n==== DETAIL TRANSAKSI ====\n";
    cout << "Nama pelanggan \t\t= " << pelanggan[0].nama << endl;
    cout << "Nama Provider \t\t= " << konversiProvider(pelanggan[0].provider) << endl;
    cout << "Nominal transaksi \t= Rp." << totalNominal << endl;
    cout << "Harga pulsa \t\t= Rp." << totalBayar << endl;
}
