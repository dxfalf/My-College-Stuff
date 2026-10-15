//Array=Sekumpulan data dalam satu variabel

#include <iostream>
#include <vector>
using namespace std;

int main () {
    // sizeof (variabel) / sizeof (*variabel);
    //for (int i=0;

    int i, n;
    cout << "Jumlah indeks= ";
    cin >> n;
    vector<int> indeks(n);

    for (i=0; i<n; i++) {
        cout << "Masukkan nilai indeks ke " << i << " = ";
        cin >> indeks[i];
    }

    cout << "Isi nilai indeks pada array yang sudah masuk\n";
    for (i=0; i<n; i++){
        cout << " " << indeks[i] << " ";
    }



return 0;
}
