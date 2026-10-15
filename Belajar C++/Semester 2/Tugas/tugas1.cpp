#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main () {

    int lantai = 3;
    int ruang = 4;
    int suhuRuang [lantai][ruang];
    int l, r;

//PENGATURAN LANTAI & RUANGAN
    for (l=0; l<3; l++) {
        for (r=0; r<4; r++) {
            cout << "Lantai Ke -" << l+1 << " Ruangan Nomor " << r+1 << " Bersuhu = ";
            cin >> suhuRuang [l][r] ;
        } cout << endl;
    }


//TABEL KESELURUHAN
    cout << "\n===== TABEL SUHU =====" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << left << setw(10) << "R/L";
    for (r=0; r<ruang; r++) {
        cout << left << setw(12) << ("Ruang " + to_string(r+1));
    }
    cout << left << setw(10) << "Total" << left << setw(10) << "Kondisi Suhu" << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    for (l=0; l<lantai; l++) {
        int total=0;
        cout << left << setw(10) << ("Lantai " + to_string(l+1));
        for (r=0; r<ruang; r++) {
            cout << left << setw(12) << suhuRuang[l][r];
            total += suhuRuang[l][r];
        }
        string kondisiSuhu;
            if (suhuRuang [l][r] > 30 ) {
                kondisiSuhu="Panas";
            } else if (suhuRuang [l][r] >= 25) {
                kondisiSuhu="Normal";
            } else {
                kondisiSuhu="Dingin";
            }
        cout << left << setw(10) << total << left << setw(10) << kondisiSuhu << endl;
    }

return 0;
}
