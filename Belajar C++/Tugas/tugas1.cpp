#include <iostream>
using namespace std;

int main () {
    int pengeluaran1, pengeluaran2, hari=7;

    cout << "Uang Santi yang dikeluarkan pada hari-hari biasanya = Rp. ";
    cin >> pengeluaran1;

    cout << "Pengeluaran yang berhasil Santi kurangi = Rp. ";
    cin >> pengeluaran2;

    int sisauang = (pengeluaran1-pengeluaran2)*hari;

    cout << "===================================================================" << endl;
    cout << "Uang yang berhasil di hemat Santi dalam kurun waktu 7 hari adalah = Rp. " << sisauang;

    return 0;
}
