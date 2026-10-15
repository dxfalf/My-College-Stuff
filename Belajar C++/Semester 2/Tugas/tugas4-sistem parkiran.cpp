#include <iostream>
#include <string>
using namespace std;


enum kendaraan {motor,mobil,};


struct parkir {;
    string platnomer,merek;
    int lama;
    kendaraan jenis;
};

int hitungbiaya(parkir p) {
if (p.jenis==motor) {
    return p.lama * 2000;

}else {
 return p.lama *5000;
}



}
int main () {
 int max=50;
parkir data [max];
int jumlah;

 cout << "masukan jumlah kendaraan parkir : " ;
 cin >> jumlah;


 for (int i = 0; i < jumlah; i++) {
    cout << "\n data kendaraan ke :" <<  i + 1 << endl;
    cout << "plat nomor: ";
    cin >> data [i].platnomer;
    cout << "merek motor:";
    cin >> data[i].merek;
    cout << "lama parkir (jam): ";
    cin >> data [i].lama;
    int pilih;
        cout << "jenis kendaraan (0 = motor, 1= mobil) = ";
        cin >> pilih;
        data [i].jenis = (kendaraan) pilih;

 }

 cout << "\n data parkir " << endl;
 for (int i =0; i <jumlah; i++) {
    cout << "\n kendaraan ke = " << i + 1 << endl;
    cout << "plat nomer:" << data[i].platnomer << endl;
    cout << "merek :" << data[i].merek << endl;
    cout << "lama parkir :" << data[i].lama << "jam" << endl;

    if (data[i].jenis == motor) {
        cout << "jenis : motor " << endl;
    } else {
    cout << "jenis : mobil" << endl;

    }
 cout << "biaya parkir : rp" << hitungbiaya(data[i])  << endl;


}
cout << "\ntotal kendaraan parkir" << jumlah << endl;



    return 0;
}
