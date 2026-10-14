#include <iostream>
#include <string>
using namespace std;

int main () {
int golongan;
char jabatan;
int jamkerja, absensi;
int tunjangan, insentif;
int potongan, denda, pajak, bpjs;
int gajipokok, gajibulanan, gajibersih;
int pilihanmenu;
char ulangmenu='y';
char reset='y';
string pegawai;

do {
    //MENU HAHA
    cout << "\n===SISTEM PENGGAJIAN BERTINGKAT===\n";
    cout << "1. Registrasi Data Pegawai\n";
    cout << "2. Penetapan Jabatan & Golongan\n";
    cout << "3. Input Jam Kerja & Absensi\n";
    cout << "4. Hitung Gaji Pokok\n";
    cout << "5. Tunjangan & Insentif\n";
    cout << "6. Potongan & Denda\n";
    cout << "7. Pajak & BPJS\n";
    cout << "8. Rekap Gaji Bulanan\n";
    cout << "9. Slip Gaji Terperinci\n";
    cout << "10. Reset/Koreksi Data\n";
    cout << "11. Keluar\n";
    cout << "Pilih Menu 1-11= ";
    cin >> pilihanmenu;

    switch (pilihanmenu) {

    case 1:
        cout << "\n===REGISTRASI DATA===\n";
        cout << "Masukkan Nama Kamu= ";
        cin >> pegawai;
        cout << "Masukkan Jabatan Kamu (a/b/c)= ";
        cin >> jabatan;
        cout << "Masukkan Golongan Kamu (1/2/3)= ";
        cin >> golongan;
        break;

    case 2:
        cout << "\n===JABATAN & GOLONGAN===\n";
        cout << "Jabatan Kamu Adalah= " << jabatan << endl;
        cout << "Kamu Termasuk Golongan= " << golongan << endl;
        break;

    case 3:
        cout << "\n===JAM KERJA===\n";
        cout << "Mulai Jam Kerja, Pukul (8)= ";
        cin >> jamkerja;
        cout << "Kehadiran (0/1)= ";
        cin >> absensi;
            if (absensi==1) {
                cout << "Hadir";
            } else {
                cout << "Izin";
            }
        break;

    case 4:
        cout << "\n===GAJI POKOK===\n";
        if (jabatan=='a') {
            gajipokok=5000000;
            if (golongan==1){
                gajipokok+=1500000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            } else if (golongan==2) {
                gajipokok+=1250000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            } else {
                gajipokok+=1000000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            }
        } else if (jabatan=='b') {
            gajipokok=4000000;
            if (golongan==1){
                gajipokok+=1500000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            } else if (golongan==2) {
                gajipokok+=1250000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            } else {
                gajipokok+=1000000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            }
        } else {
            gajipokok=3000000;
            if (golongan==1){
                gajipokok+=1500000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            } else if (golongan==2) {
                gajipokok+=1250000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            } else {
                gajipokok+=1000000;
                cout << "Gaji Yang Kamu Terima Adalah= Rp. " << gajipokok << endl;
            }
        }
        break;

    case 5:
        cout << "\n===TUNJANGAN & INSENTIF===\n";
        if (jabatan=='a') {
            tunjangan=500000;
            insentif=50000;
            cout << "Tunjangan= Rp. " << tunjangan << endl;
            cout << "Insentif= Rp. " << insentif << endl;
        } else if (jabatan=='b') {
            tunjangan=400000;
            insentif=40000;
            cout << "Tunjangan= Rp. " << tunjangan << endl;
            cout << "Insentif= Rp. " << insentif << endl;
        } else {
            tunjangan=300000;
            insentif=30000;
            cout << "Tunjangan= Rp. " << tunjangan << endl;
            cout << "Insentif= Rp. " << insentif << endl;
        }
        break;

    case 6:
        cout << "\n===POTONGAN & DENDA===\n";
        potongan=500000;
        denda=0;
        cout << "Potongan= Rp. " << potongan << endl;
        if (jamkerja>8) {
            denda=300000;
            cout << "Kamu Mendapatkan Denda Terlambat Sebesar= Rp. " << denda << endl;
        }
        break;

    case 7:
        cout << "\n===PAJAK & BPJS===\n";
        if (jabatan=='a') {
            pajak=2000000;
            bpjs= 500000;
            cout << "Pajak Yang Harus Kamu Bayar= Rp. " << pajak << endl;
            cout << "BPJS Yang Harus Kamu Bayar= Rp. " << bpjs << endl;
        } else if (jabatan=='b') {
            pajak=1000000;
            bpjs= 250000;
            cout << "Pajak Yang Harus Kamu Bayar= Rp. " << pajak << endl;
            cout << "BPJS Yang Harus Kamu Bayar= Rp. " << bpjs << endl;
        } else {
            pajak=500000;
            bpjs= 100000;
            cout << "Pajak Yang Harus Kamu Bayar= Rp. " << pajak << endl;
            cout << "BPJS Yang Harus Kamu Bayar= Rp. " << bpjs << endl;
        }
        break;

    case 8:
        cout << "\n===REKAP GAJI BULANAN===\n";
        cout << "Gaji Pokok= Rp. " << gajipokok << endl;
        cout << "Tunjangan & Insentif= Rp. " << tunjangan+insentif << endl;
        cout << "Potongan & Denda= Rp. " << potongan+denda << endl;
        cout << "Pajak= Rp. " << pajak << endl;
        cout << "BPJS= Rp. " << bpjs << endl;
        break;

    case 9:
        cout << "\n===SLIP GAJI TERPERINCI===\n";
        gajibersih=(gajipokok+tunjangan+insentif)-(potongan+denda+pajak+bpjs);
        cout << "Gaji Bersih Yang Kamu Terima Adalah Rp. " << gajibersih << endl;
        break;

    case 10:
        cout << "\n===RESET DATA===\n";
        cout << "Apakah Ingin Reset Data? (y/n)\n";
        if (reset=='y') {
            jamkerja=0;
            absensi=false;
            tunjangan=0;
            insentif=0;
            potongan=0;
            denda=0;
            pajak=0;
            bpjs=0;
            gajipokok=0;
            gajibulanan=0;
            gajibersih=0;
        }
        break;

    case 11:
        cout << "\nTerimakasih Telah Menggunakan Sistem Ini!!\n";
        break;

    default:
        cout << "Pilihan Tidak Valid!!\n";
    }

    if (pilihanmenu != 11) {
                cout << "\nKembali ke menu? (y/n): ";
                cin >> ulangmenu;
                system("cls");
            }

    } while (ulangmenu=='y' || ulangmenu=='Y');

return 0;

}
