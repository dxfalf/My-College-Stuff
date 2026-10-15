package tugas1;

public class Kendaraan {
    String nomorPlat;
    String merk;
    String warna;
    String jenisKendaraan;
    
public static void main(String[] args) {
    Kendaraan kendaraan1 = new Kendaraan();
    Kendaraan kendaraan2 = new Kendaraan();
    Kendaraan kendaraan3 = new Kendaraan();
    
    kendaraan1.nomorPlat = "B 1234 ABC";
    kendaraan1.merk = "Toyota";
    kendaraan1.warna = "Hitam";
    kendaraan1.jenisKendaraan = "Mobil";
    
    kendaraan2.nomorPlat = "B 5678 XYZ";
    kendaraan2.merk = "Honda";
    kendaraan2.warna = "Putih";
    kendaraan2.jenisKendaraan = "Mobil";
    
    kendaraan3.nomorPlat = "L 1111 AA";
    kendaraan3.merk = "Yamaha";
    kendaraan3.warna = "Merah";
    kendaraan3.jenisKendaraan = "Motor";
    
    System.out.println("==== Data Kendaraan Pertama ====\n" 
        + "Nomor Plat = " + kendaraan1.nomorPlat 
        + "\nMerk = " + kendaraan1.merk 
        + "\nWarna = " + kendaraan1.warna
        + "\nJenis Kendaraan = " + kendaraan1.jenisKendaraan);
    
    System.out.println("\n==== Data Kendaraan Kedua ====\n" 
        + "Nomor Plat = " + kendaraan2.nomorPlat 
        + "\nMerk = " + kendaraan2.merk 
        + "\nWarna = " + kendaraan2.warna
        + "\nJenis Kendaraan = " + kendaraan2.jenisKendaraan);
    
    System.out.println("\n==== Data Kendaraan Ketiga ====\n" 
        + "Nomor Plat = " + kendaraan3.nomorPlat 
        + "\nMerk = " + kendaraan3.merk 
        + "\nWarna = " + kendaraan3.warna
        + "\nJenis Kendaraan = " + kendaraan3.jenisKendaraan);
}
}
