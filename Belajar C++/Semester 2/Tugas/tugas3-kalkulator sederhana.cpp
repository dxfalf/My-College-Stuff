#include <iostream>
using namespace std;

int tambah(int a, int b){
    return a + b;
}

int kurang(int a, int b){
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

int bagi(int a, int b){
    if(b == 0){
        cout << "Tidak bisa dibagi 0!" << endl;
        return 0;
    }
    return a / b;
}


int main (){
    int a, b;
    int pilihMenu;
    char ulangMenu;

do {
    cout << "=======PILIHAN MENU=======\n";
    cout << "1. Menu 1\n";
    cout << "2. Menu 2\n";
    cout << "3. Menu 3\n";
    cout << "4. Menu 4\n";
    cout << "Pilih Menu (1-4) = ";
    cin >> pilihMenu;

    switch (pilihMenu) {
    case 1:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya = " << tambah(a,b);
    }
    break;

    case 2:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya = " << kurang(a,b);
    }
    break;

    case 3:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya = " << kali(a,b);
    }
    break;

    case 4:
    {
        cout << "Pilih Angka = ";
        cin >> a;
        cout << "Pilih Angka = ";
        cin >> b;
        cout << "Hasilnya = " << bagi(a,b);
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

} while (ulangMenu=='y' || ulangMenu=='Y');

return 0;
}
