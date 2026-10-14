#include <iostream>
#include <iomanip>
using namespace std;

// Stack - Riwayat Transaksi
#define MAX 100

string stackRiwayat[MAX];
int topStack = -1;

void pushStack(string data) {
    if (topStack == MAX - 1) {
        cout << "Stack penuh!" << endl;
    } else {
        topStack++;
        stackRiwayat[topStack] = data;
    }
}

// Circular Queue - Antrian Nasabah
class CircularQueue {
private:
    string data[MAX];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % MAX == front;
    }

    void enqueue(string nilai) {
        if (isFull()) {
            cout << "Queue penuh!\n";
        } else {
            if (isEmpty()) {
                front = 0;
            }
            rear = (rear + 1) % MAX;
            data[rear] = nilai;
        }
    }

    string dequeue() {
        if (isEmpty()) {
            return "";
        } else {
            string nilai = data[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX;
            }
            return nilai;
        }
    }

    void tampil() {
        if (isEmpty()) {
            cout << "Queue kosong\n";
        } else {
            cout << "Isi queue: ";
            int i = front;
            while (true) {
                cout << data[i] << " ";
                if (i == rear) break;
                i = (i + 1) % MAX;
            }
            cout << endl;
        }
    }

    int getSize() {
        if (isEmpty()) {
            return 0;
        }
        if (rear >= front) return rear - front + 1;
        return MAX - front + rear + 1;
    }

    string getData(int i) {
        return data[(front + i) % MAX];
    }

    bool kosong() {
        return isEmpty();
    }
};

// Identitas Nasabah (berisi nama, no Rek, dan saldo)
class Nasabah {
public:
    string nama;
    string noRek;
    double saldo;

    Nasabah() {
        nama = "";
        noRek = "";
        saldo = 0;
    }

    Nasabah(string n, string nr, double s = 0) {
        nama = n;
        noRek = nr;
        saldo = s;
    }
};

// Berisi seluruh proses transaksi dan pengelolaan bank.
class sistemBank {
private:
    Nasabah daftarNasabah[MAX];
    int jumlahNasabah;
    CircularQueue antrian;

public:
    sistemBank() {
        jumlahNasabah = 0;
    }

    // Menambahkan nasabah ke dalam antrian
    void tambahAntrian(string noRek) {
        antrian.enqueue(noRek);
        cout << "Berhasil masuk antrian.\n";
    }

// Memanggil nasabah berikutnya 
    string panggilAntrian() {
        if (antrian.kosong()) {
            return "";
        }
        string noRekDipanggil = antrian.dequeue();
        cout << "\n[INFO!] Memanggil nasabah nomor antrian berikutnya untuk dilayani...\n";
        return noRekDipanggil;
    }

// Menampilkan daftar antrian
    void lihatAntrian() {
        cout << "\n=== DAFTAR ANTRIAN NASABAH ===\n";
        if (antrian.kosong()) {
            cout << "Antrian kosong.\n";
            return;
        }
        cout << left << setw(10) << "No. Urut" << setw(15) << "No. Rekening" << "\n";
        cout << "-------------------------\n";
        for (int i = 0; i < antrian.getSize(); i++) {
            cout << left << setw(10) << (i + 1)
                 << setw(15) << antrian.getData(i) << "\n";
        }
    }

    bool antrianKosong() {
        return antrian.kosong();
    }

// Menyimpan riwayat transaksi ke stack
    void tambahRiwayat(string noRek, string ket) {
        string data = noRek + "|" + ket;
        pushStack(data);
    }

// Menampilkan riwayat transaksi nasabah
    void tampilRiwayat(string noRek) {
        cout << "\n=== RIWAYAT TRANSAKSI (No.Rek: " << noRek << ") ===\n";
        cout << "(transaksi terbaru ditampilkan paling atas)\n";
        cout << "----------------------------------------\n";

        if (topStack == -1) {
            cout << "Belum ada transaksi.\n";
            return;
        }

        bool adaRiwayat = false;
        int no = 1;

        for (int i = topStack; i >= 0; i--) {
            string data = stackRiwayat[i];
            string noRekData = "";

            int pos = data.find('|');
            if (pos != string::npos) {
                noRekData = data.substr(0, pos);
                if (noRekData == noRek) {
                    string ket = data.substr(pos + 1);
                    cout << setw(2) << no << ". " << ket << "\n";
                    adaRiwayat = true;
                    no++;
                }
            }
        }

        if (!adaRiwayat) {
            cout << "Belum ada transaksi untuk nasabah ini.\n";
        }
    }

// Mencari index berdasarkan pada nomor rekening
    int cariIndex(string noRek) {
        for (int i = 0; i < jumlahNasabah; i++) {
            if (daftarNasabah[i].noRek == noRek) {
                return i;
            }
        }
        return -1;
    }

    int daftarNasabahBaru(string nama, string noRek) {
        if (jumlahNasabah >= MAX) {
            cout << "Maaf, kapasitas data nasabah penuh.\n";
            return -1;
        }
        daftarNasabah[jumlahNasabah] = Nasabah(nama, noRek, 0);
        antrian.enqueue(noRek);
        int idx = jumlahNasabah;
        jumlahNasabah++;
        cout << "Nasabah baru terdaftar & masuk antrian.\n";
        return idx;
    }

    string getNama(int idx) {
        return daftarNasabah[idx].nama;
    }

    void cekSaldo(int idx) {
        cout << "\n=== CEK SALDO ===\n";
        cout << left << setw(15) << "Nama" << ": " << daftarNasabah[idx].nama << "\n";
        cout << left << setw(15) << "No. Rek" << ": " << daftarNasabah[idx].noRek << "\n";
        cout << fixed << setprecision(2);
        cout << left << setw(15) << "Saldo" << ": Rp" << daftarNasabah[idx].saldo << "\n";
    }

    void setorTunai(int idx, double jumlah) {
        if (jumlah <= 0) {
            cout << "Jumlah setoran tidak valid.\n";
            return;
        }
        daftarNasabah[idx].saldo += jumlah;
        string ket = "Setor tunai: Rp" + to_string((int)jumlah);
        tambahRiwayat(daftarNasabah[idx].noRek, ket);
        cout << "Setor tunai berhasil. Saldo sekarang: Rp"
             << fixed << setprecision(2) << daftarNasabah[idx].saldo << "\n";
    }

    void tarikTunai(int idx, double jumlah) {
        if (jumlah <= 0) {
            cout << "Jumlah penarikan tidak valid.\n";
            return;
        }
        if (jumlah > daftarNasabah[idx].saldo) {
            cout << "Saldo tidak mencukupi.\n";
            return;
        }
        daftarNasabah[idx].saldo -= jumlah;
        string ket = "Tarik tunai: Rp" + to_string((int)jumlah);
        tambahRiwayat(daftarNasabah[idx].noRek, ket);
        cout << "Tarik tunai berhasil. Saldo sekarang: Rp"
             << fixed << setprecision(2) << daftarNasabah[idx].saldo << "\n";
    }

    // Revisi pak irfan (minimal transfer 10000)
    void transfer(int idxAsal, string noRekTujuan, double jumlah) {
        if (jumlah <= 0) {
            cout << "Jumlah transfer tidak valid.\n";
            return;
        }
        if (jumlah < 10000) {
            cout << "Transfer gagal. Jumlah transfer minimal Rp10.000.\n";
            return;
        }
        if (jumlah > daftarNasabah[idxAsal].saldo) {
            cout << "Saldo tidak mencukupi untuk transfer.\n";
            return;
        }
        int idxTujuan = cariIndex(noRekTujuan);
        if (idxTujuan == -1) {
            cout << "No. rekening tujuan tidak ditemukan.\n";
            return;
        }
        if (idxTujuan == idxAsal) {
            cout << "Tidak bisa transfer ke rekening sendiri.\n";
            return;
        }
        daftarNasabah[idxAsal].saldo -= jumlah;
        daftarNasabah[idxTujuan].saldo += jumlah;

        string ket1 = "Transfer keluar ke " + noRekTujuan + ": Rp" + to_string((int)jumlah);
        string ket2 = "Transfer masuk dari " + daftarNasabah[idxAsal].noRek + ": Rp" + to_string((int)jumlah);
        tambahRiwayat(daftarNasabah[idxAsal].noRek, ket1);
        tambahRiwayat(noRekTujuan, ket2);

        cout << "Transfer berhasil ke " << noRekTujuan << ".\n";
        cout << "Sisa saldo Anda: Rp" << fixed << setprecision(2)
             << daftarNasabah[idxAsal].saldo << "\n";
    }

    void riwayatTransaksi(int idx) {
        tampilRiwayat(daftarNasabah[idx].noRek);
    }

// Mengurutkan data berdasarkan nama
    void bubbleSortNama() {
        for (int i = 0; i < jumlahNasabah - 1; i++) {
            for (int j = 0; j < jumlahNasabah - 1 - i; j++) {
                if (daftarNasabah[j].nama > daftarNasabah[j + 1].nama) {
                    Nasabah t = daftarNasabah[j];
                    daftarNasabah[j] = daftarNasabah[j + 1];
                    daftarNasabah[j + 1] = t;
                }
            }
        }
        cout << "Data berhasil diurutkan berdasarkan NAMA (A-Z).\n";
    }

    // Mengurutkan data berdasarkan saldo
    void bubbleSortSaldo() {
        for (int i = 0; i < jumlahNasabah - 1; i++) {
            for (int j = 0; j < jumlahNasabah - 1 - i; j++) {
                if (daftarNasabah[j].saldo < daftarNasabah[j + 1].saldo) {
                    Nasabah t = daftarNasabah[j];
                    daftarNasabah[j] = daftarNasabah[j + 1];
                    daftarNasabah[j + 1] = t;
                }
            }
        }
        cout << "Data berhasil diurutkan berdasarkan SALDO (terbesar-terkecil).\n";
    }

    void tampilNasabah() {
        cout << "\n=== DATA SELURUH NASABAH ===\n";
        cout << left << setw(20) << "Nama"
             << setw(15) << "No. Rek"
             << "Saldo\n";
        cout << "--------------------------------------------\n";
        for (int i = 0; i < jumlahNasabah; i++) {
            cout << left << setw(20) << daftarNasabah[i].nama
                 << setw(15) << daftarNasabah[i].noRek
                 << fixed << setprecision(2) << "Rp" << daftarNasabah[i].saldo << "\n";
        }
    }

    void menuSorting() {
        int pilih;
        cout << "\n=== SORTING DATA NASABAH ===\n";
        cout << "1. Urutkan berdasarkan Nama (A-Z)\n";
        cout << "2. Urutkan berdasarkan Saldo (Terbesar-Terkecil)\n";
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih == 1) bubbleSortNama();
        else if (pilih == 2) bubbleSortSaldo();
        else {
            cout << "Pilihan tidak valid.\n";
            return;
        }
        tampilNasabah();
    }

};

// FUNCTION - MENU UTAMA
void menuUtama() {
    cout << "\n===== MENU UTAMA =====\n";
    cout << "1. Input Data Diri Nasabah\n";
    cout << "2. Mulai Layani Nasabah Berikutnya\n";
    cout << "3. Keluar Program\n";
    cout << "Pilih menu: ";
}

// FUNCTION - MENU LAYANAN BANK
void menuBank() {
    cout << "\n===== MENU LAYANAN BANK =====\n";
    cout << "1. Cek Saldo\n";
    cout << "2. Setor Tunai\n";
    cout << "3. Tarik Tunai\n";
    cout << "4. Transfer\n";
    cout << "5. Riwayat Transaksi\n";
    cout << "6. Lihat Antrian Nasabah\n";
    cout << "7. Sorting Data Nasabah\n";
    cout << "8. Exit (kembali ke Menu Utama)\n";
    cout << "Pilih menu: ";
}

// Revisi pak irfan buat menu setor tunai dan tarik tunai (dibuat pilihan menu dengan kelipatan 50000)
double pilihJumlahTransaksi() {
    int maksPilihan = 10; 
    int pilih;

    cout << "\nJumlah Nominal:\n";
    for (int i = 1; i <= maksPilihan; i++) {
        cout << i << ". Rp " << (i * 50000) << "\n";
    }
    cout << "Pilihan (1-10): ";
    cin >> pilih;

    if (pilih < 1 || pilih > maksPilihan) {
        cout << "Pilihan tidak valid.\n";
        return 0;
    }
    return pilih * 50000;
}

// Proses nasabah masuk ke antrian
void masukAntrian(sistemBank &bank) {
    string nama, noRek;
    cout << "\n===== NASABAH MASUK ANTRIAN =====\n";
    cout << "Masukkan Nama        : ";
    cin >> nama;
    cout << "Masukkan No. Rekening: ";
    cin >> noRek;

    int idx = bank.cariIndex(noRek);
    if (idx == -1) {
        cout << "No. rekening belum terdaftar. Mendaftarkan sebagai nasabah baru...\n";
        bank.daftarNasabahBaru(nama, noRek);
    } else {
        cout << "Nasabah lama (" << bank.getNama(idx) << ") ditambahkan ke antrian.\n";
        bank.tambahAntrian(noRek);
    }
}

// Melayani nasabah yang dipanggil
void layaniNasabah(sistemBank &bank) {
    if (bank.antrianKosong()) {
        cout << "\nAntrian kosong, belum ada nasabah yang menunggu.\n";
        return;
    }

    string noRekDipanggil = bank.panggilAntrian();
    int idxCek = bank.cariIndex(noRekDipanggil);

    if (idxCek == -1) {
        cout << "Data nasabah tidak ditemukan.\n";
        return;
    }

    string noRekAktif = noRekDipanggil;
    cout << "Sekarang melayani: " << bank.getNama(idxCek) << "\n";

    bool layani = true;
    while (layani) {
        menuBank();
        int pilihan;
        cin >> pilihan;

        int idxAktif = bank.cariIndex(noRekAktif);
        if (idxAktif == -1 && pilihan != 8) {
            cout << "Data nasabah tidak ditemukan (mungkin terhapus).\n";
            continue;
        }

        switch (pilihan) {
            case 1:
                bank.cekSaldo(idxAktif);
                break;
            case 2: {
                double jumlah = pilihJumlahTransaksi();
                bank.setorTunai(idxAktif, jumlah);
                break;
            }
            case 3: {
                double jumlah = pilihJumlahTransaksi();
                bank.tarikTunai(idxAktif, jumlah);
                break;
            }
            case 4: {
                string noRekTujuan;
                double jumlah;
                cout << "No. Rekening tujuan: ";
                cin >> noRekTujuan;
                cout << "[INFO!] Jumlah transfer minimal Rp10.000.\n";
                cout << "Jumlah transfer: ";
                cin >> jumlah;
                bank.transfer(idxAktif, noRekTujuan, jumlah);
                break;
            }
            case 5:
                bank.riwayatTransaksi(idxAktif);
                break;
            case 6:
                bank.lihatAntrian();
                break;
            case 7:
                bank.menuSorting();
                break;
            case 8:
                cout << "\nTerima kasih, kembali ke Menu Utama...\n";
                layani = false;
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
        }
    }
}

// Di Function int main tinggal memanggil function diatas
int main() {
    sistemBank bank;
    bool programJalan = true;

    cout << "===== SISTEM PENGELOLAAN BANK =====\n";

    while (programJalan) {
        menuUtama();
        int pilihanUtama;
        cin >> pilihanUtama;

        switch (pilihanUtama) {
            case 1:
                masukAntrian(bank);
                break;
            case 2:
                layaniNasabah(bank);
                break;
            case 3:
                programJalan = false;
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
        }
    }

    cout << "\nProgram selesai. Sampai jumpa!\n";
    return 0;
}
