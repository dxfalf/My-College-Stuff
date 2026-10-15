#include <iostream>
using namespace std;

// LATIHAN FUNCTION
/*
//SOAL 1
void say_helo(){
    cout << "Hello, World!\n";
}

int main () {
    say_helo();
}
*/

/*
//SOAL 2
int number(int a,int b) {
    return a + b;
}

int main () {
    int a, b;
    cout << "Ingfokan Angka = ";
    cin >> a;
    cout << "Ingfokan Angka = ";
    cin >> b;
    cout << "Nyoh pek = " << number(a,b);
    return 0;
}
*/

// SOAL 3
/*
int luas (int p, int l){
    return p*l;
}

int main () {
    int p, l;
    cout << "Ingfokan Panjang = ";
    cin >> p;
    cout << "Ingfokan Lebar = ";
    cin >> l;
    cout << "Nyoh Pek Luas Lingkaran = " << luas(p,l) << " cm \n";
    return 0;
}
*/

// SOAL 4
int tambah(int a, int b) {
    return a+b;
}
int kurang(int a, int b) {
    return a-b;
}
int kali(int a, int b) {
    return a*b;
}
double bagi(double d, double e){
    return d/e;
}

int main () {
    int a, b;
    double d, e;
    int pilihMenu;
    char ulangMenu;

do {
    cout << "=======Kalkulator SIGMA=======\n";
    cout << "1. Pilih Untuk Menu Pertambahan\n";
    cout << "2. Pilih Untuk Menu Pengurangan\n";
    cout << "3. Pilih Untuk Menu Perkalian\n";
    cout << "4. Pilih Untuk Menu Pembagian\n";
    cout << "Pilih Menu (1-4) = ";
    cin >> pilihMenu;

    switch (pilihMenu) {
    case 1:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya " << a << " + " << b << " = " << tambah(a,b) << endl;
    }
    break;

    case 2:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya " << a << " - " << b << " = " << kurang(a,b) << endl;
    }
    break;

    case 3:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya " << a << " * " << b << " = " << kali(a,b) << endl;
    }
    break;

    case 4:
    {
        cout << "Pilih Angka = ";
        cin >> d;
        cout << "Pilih Angka = ";
        cin >> e;
        cout << "Hasilnya " << d << " / " << e << " = " << bagi(d,e) << endl;
    }
    break;

    default:
    cout << "Pilihlah ke Menu yang Benar Anda Makhluk Sialan" << endl;

    }

    if (pilihMenu != 4) {
        cout << "\nKembali ke menu? (y/n): \n";
        cin >> ulangMenu;
        system("cls");
    }

} while (ulangMenu=='y' || ulangMenu=='Y');

return 0;
}
