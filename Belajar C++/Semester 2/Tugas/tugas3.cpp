#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum Grade {A, B, C, D, E};

struct Mahasiswa {
    string nama;
    int nim;
    int nilaitugas;
    int uts;
    int uas;
    int nilaiAkhir;
    Grade grade;
};

int nilaiakhir(int nilaitugas, int uts, int uas) {
    return (nilaitugas*0.3) + (uts*0.3) + (uas*0.4);
}

int main(){
Mahasiswa mhs;
int i, jumlahMahasiswa;
    cout << "Jumlah Mahasiswa = ";
    cin >> jumlahMahasiswa;
    vector<int> indeks(jumlahMahasiswa);

    for (i=0; i<jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke -" << i+1 << endl ;
        cout << "Masukkan Nama Mahasiswa = ";
        cin >> mhs.nama;
        cout << "Masukkan NIM Mahasiswa = ";
        cin >> mhs.nim;
        cout << "Masukkan Nilai Tugas Mahasiswa = ";
        cin >> mhs.nilaitugas;
        cout << "Masukkan Nilai UTS Mahasiswa = ";
        cin >> mhs.uts;
        cout << "Masukkan Nilai UAS Mahasiswa = ";
        cin >> mhs.uas;
        cout << "Masukkan Nilai Akhir Mahasiswa = ";
        cin >> mhs.nilaiAkhir;
    }



return 0;
}
