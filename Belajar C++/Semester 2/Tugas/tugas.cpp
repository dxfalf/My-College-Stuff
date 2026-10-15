#include <iostream>
#include <string>
#include <vector>
using namespace std;

// LATIHAN STUDI KASUS PAKAI ARRAY
int main () {
int ratarata, pilihanmenu, laporan, kategori;
char ulangmenu='y';
int total, sepi;
int i;
vector <int> hari(7);

do {
    cout << "===Menu Perhitungan Performa Kedai Kopi===\n";
    cout << "1. Input Penjualan Cup dalam 7 Hari\n";
    cout << "2. Hitung Rata-Rata Penjualan Cup dalam 7 Hari\n";
    cout << "3. Rekap Laporan\n";
    cout << "4. Keluar Program\n";
    cout << "Pilih Menu (1-4) = ";
    cin >> pilihanmenu;

    switch (pilihanmenu) {

    case 1:
    {
     cout << "\n===Input Penjualan Cup dalam 7 Hari===\n";
     for (i=0; i<7; i++) {
        cout << "Masukkan Jumlah Penjualan Cup Hari ke-" << i + 1 << " = ";
        cin >> hari[i];
     if (hari[i]<30) {
        cout << "Penjualan di Cafe Masuk dalam Kategori Sepi\n";
     } else if (hari[i]<=60) {
        cout << "Penjualan di Cafe Masuk dalam Kategori Normal\n";
     } else {
        cout << "Penjualan di Cafe Masuk dalam Kategori Ramai\n";
       }
     }
    }
    break;

    case 2:
    {
     cout << "\n===Rata-Rata Penjualan Cup dalam 7 Hari===\n";
     total=0;
     for (i=0; i<7; i++) {
        cout << "Penjualan Hari ke-" << i+1 << " = " << hari[i] << endl;
        total+= hari[i];
        cout << "Total dari Penjualan=" << total << endl;
     }
     ratarata=total/7;
        cout << "Rata-Rata dari Penjualan Cup dalam 7 Hari = " << ratarata << endl;
    }
    break;

    case 3:
    {
     cout << "\n===Rekap Laporan===\n";
     cout << "=====================================" << endl;
     cout << "| Hari | Penjualan (cup) |" << endl;
     cout << "-------------------------------------" << endl;
        total = 0;
        kategori = 0;
     for (int i = 0; i < 7; i++) {
        cout << "|  " << i + 1 << "   |      " << hari[i] << "       |" << endl;
        total += hari[i];
     if (hari[i] < 30) {
        kategori++;
        }
    }
     cout << "-------------------------------------" << endl;
     ratarata = total / 7;
     cout << "| Total|      " << total << "        |" << endl;
     cout << "| Rata2|      " << ratarata << "        |" << endl;
     cout << "=====================================" << endl;
     if (sepi >= 2) {
        cout << "\nPERINGATAN: Perlu strategi promosi tambahan!" << endl;
        cout << "(" << sepi << " hari kategori SEPI)" << endl;
        }
    }
    break;

    case 4:
    {
     cout << "Terimakasih Anda Sudah Menggunakan Program Anjay ini\n";
     ulangmenu='n';
    }
    break;

    default:
    cout << "Pilihlah ke Menu yang Benar Anda Makhluk Sialan" << endl;

    }

    if (pilihanmenu != 4) {
        cout << "\nKembali ke menu? (y/n): ";
        cin >> ulangmenu;
        system("cls");
    }

} while (ulangmenu=='y' || ulangmenu=='Y');

return 0;
}
