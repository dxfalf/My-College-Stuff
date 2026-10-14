#include <iostream>
using namespace std;
//UTS NO.1
/*int main () {
    int kalori1, kalori2, kalori3, kalori4;

    cout << "=== Program Diet ===\n";
    cout << "Jumlah Kalori Saat Sarapan = ";
    cin >> kalori1;
    cout << "Jumlah Kalori Saat Makan Siang = ";
    cin >> kalori2;
    cout << "Jumlah Kalori Saat Makan Malam = ";
    cin >> kalori3;
    cout << "Jumlah Kalori Saat Nyemil = ";
    cin >> kalori4;

    cout << "============================================\n";
    int kaloriharian=kalori1+kalori2+kalori3+kalori4;
    cout << "Total Kalori Harian Kamu Adalah = " << kaloriharian << " kalori\n";
    int kalorimingguan=kaloriharian*7;
    cout << "Total Kalori Kamu Dalam Kurun Waktu 7 Hari Adalah = " << kalorimingguan << " kalori\n";
    int ratarata=kaloriharian/24;
    cout << "Rata-Rata Kalori per Jam Adalah = " << ratarata << " kalori";

    return 0;
}*/


//UTS NO.2
/*int main () {
    int bata=55, cat=18, jam=2;
    int dibayar1=1500, dibayar2=4000, dibayar3=12000;

    cout << "=== Program Gaji Harian Tukang Bangunan ===\n";
    cout << "Tukang Bekerja Memasang Bata Sebanyak = " << bata << " Bata\n";
    cout << "Tukang Bekerja Mengecat Seluas = " << cat << " m2\n";
    cout << "Tukang Bekerja Membersihkan Area Selama = " << jam << " Jam\n";

    cout << " \n";
    cout << "=== Pendapatan Tukang ===\n";
    int pendapatan1=bata*dibayar1;
    cout << "Pendapatan Tukang Saat Memasang Bata = Rp." << pendapatan1 << endl;
    int pendapatan2=cat*dibayar2;
    cout << "Pendapatan Tukang Saat Mengecat = Rp." << pendapatan2 << endl;
    int pendapatan3=jam*dibayar3;
    cout << "Pendapatan Tukang Saat Membersihkan Area = Rp." << pendapatan3 << endl;
    int pendapatantotal=pendapatan1+pendapatan2+pendapatan3;
    cout << "Pendapatan Total Tukang = Rp." << pendapatantotal << endl;
    int uangmakan=15000;
    cout << "Uang Makan Tukang = Rp." << uangmakan << endl;
    int sisapendapatan=pendapatantotal-uangmakan;
    cout << "Sisa Pendapatan Tukang = Rp." << pendapatantotal << " - Rp." << uangmakan << " = Rp." << sisapendapatan;

    return 0;
}*/


//UTS NO.3
/*int main () {
    int botol1=120, botol2=80, ukuran1=600, ukuran2=1;

    cout << "=== Produksi Pabrik Sirup Selama 1 Jam ===\n";
    cout << "Produk Botol Pertama Sebanyak = " << botol1 << " Botol, Berukuran = " << ukuran1 << " ml\n";
    cout << "Produk Botol Kedua Sebanyak = " << botol2 << " Botol, Berukuran = " << ukuran2 << "liter\n";

    cout << " \n";
    cout << "=== Produksi Pabrik Sirup Selama 8 Jam Kerja ===\n";
    int hasil1=botol1*8;
    cout << "Total Botol Berukuran Berukuran 600 ml Sebanyak = " << hasil1 << " Botol\n";
    int hasil2=botol2*8;
    cout << "Total Botol Berukuran Berukuran 1 liter Sebanyak = " << hasil2 << " Botol\n";
    int totalliter= (ukuran1/100*8)+(1*8);
    cout << "Total Liter Minuman Yang Dihasilkan Sebanyak = " << totalliter << " liter\n";

    return 0;
}*/


//UTS NO.4
/*int main () {
    int kapasitas=1200, pompa1=15, pompa2=10, pompa3=25, waktu1=20, waktu2=25, waktu3=10;

    cout << "=== Pengisian Tangki Air ===\n";
    int total1=pompa1*waktu1;
    cout << "Total Pompa A yang Bekerja selama 20 Menit = " << total1 << " liter\n";
    int total2=pompa2*waktu2;
    cout << "Total Pompa B yang Bekerja selama 25 Menit = " << total2 << " liter\n";
    int total3=pompa3*waktu3;
    cout << "Total Pompa C yang Bekerja selama 10 Menit = " << total3 << " liter\n";
    int totalair=total1+total2+total3;
    cout << "Total Air yang Terisi pada Tangki = " << totalair << " liter\n";
    int sisa=kapasitas-totalair;
    cout << "Sisa Kapasitas Tangki = " << kapasitas << " liter" << " - " << totalair << " liter = " << sisa << " liter\n";

    return 0;
}*/


//UTS NO. 5
/*int main () {
    float jarakAB=125.5, jarakBC=98.3, jarakCD=87.4;
    int kecepatan=65;

    cout << "=== Perhitungan Perjalanan ===\n";
    float totaljarak=jarakAB+jarakBC+jarakCD;
    cout << "Total Jarak Tempuhnya Adalah = " << totaljarak << " km\n";
    float totalwaktu= totaljarak/kecepatan;
    int jam=totalwaktu;
    int menit=(totalwaktu-jam)*60;
    cout << "Total Waktu Tempuhnya Adalah = " << jam << " jam " << menit << " menit";

    return 0;
}*/


//UTS NO.6
/*int main () {
    int uts, uas, tugas;

    cout << "=== Menentukan Nilai Akhir Mata Kuliah ===\n";
    cout << "Masukkan Nilai UTS mu = ";
    cin >> uts;
    cout << "Masukkan Nilai UAS mu = ";
    cin >> uas;
    cout << "Masukkan Nilai Tugas mu = ";
    cin >> tugas;

    int nilaiakhir= (uts*30/100)+(uas*40/100)+(tugas*30/100);
    string hasilakhir= (nilaiakhir>=60) ? "Lulus" : "Tidak Lulus";
    cout << "Hasil Akhir Kamu Adalah = " << hasilakhir;

    return 0;
}*/


//UTS NO.7
/*int main () {
    int totaluang;

    cout << "=== Menghitung Diskon Belanja ===\n";
    cout << "Masukkan Berapa Jumlah Uang Kamu= ";
    cin >> totaluang;
    double diskon=(totaluang>=500000) ? 0.15 : 0.05 ;
    cout << "Total Diskon Yang Kamu Dapatkan Adalah = " << diskon*100 << "%" << endl;
    double potongan=totaluang*diskon;
    cout << "Total Potongan Yang Kamu Dapatkan Adalah = Rp." << potongan << endl;
    double pembayaran=totaluang-potongan;
    cout << "Uang Yang Harus Dibayarkan Setelah Diskon = Rp." << pembayaran;
    return 0;
}*/


//UTS NO. 8
/*int main () {
    int kg;

    cout << "Berat Pakaian (kg) Yang Ingin Di Laundry = ";
    cin >> kg;
    int hargaaawal=kg*7000;
    cout << "Biaya Laundry Awal = Rp." << hargaaawal << endl;
    int biayatambahan= (kg>10)? 10000:0;
    cout << "Biaya Tambahan Laundry = Rp." << biayatambahan << endl;
    int total=hargaaawal+biayatambahan;
    cout << "Total Harga Laundry = Rp." << hargaaawal << " + Rp." << biayatambahan << " = Rp." << total;

    return 0;
}*/


//UTS NO. 9
/*int main () {
    int jam;

    cout << "=== Menghitung Gajian Freelancer ===\n";
    cout << "Jumlah Jam Kerja = ";
    cin >> jam;
    int gajiawal= jam*30000;
    cout << "Jumlah Gaji Awal= Rp." << gajiawal << endl;
    int bonus= (jam>=8) ? (jam-8)*10000 : 0;
    cout << "Bonus Yang Di Dapat Jika Lembur = Rp." << bonus << endl;
    int total=gajiawal+bonus;
    cout << "Total Gaji Yang Di Dapat Adalah = Rp. " << gajiawal << " + Rp." << bonus << " = Rp." << total;

    return 0;
}*/


//UTS NO. 10
/*int main () {
    int km, konsumsi;

    cout << "=== Menghitung Konsumsi Bahan Bakar ===\n";
    cout << "Masukkan Jarak Tempuh = ";
    cin >> km;
    cout << "Konsumsi Kendaraan (km/l) = ";
    cin >>konsumsi;

    int liter=km/konsumsi;
    string status= (liter>=30)? "Perjalanan Jauh" : "Perjalanan Pendek";
    cout << "Jumlah Liter Yang Dihabiskan = " << liter << " liter\n";
    cout << "Status Perjalanan Merupakan = " << status;

    return 0;
}*/
