/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tugas2;

/**
 *
 * @author dafaa
 */
public class tugasSlebew {
    public static void main(String[] args) {
        /*
        // NO. 1
        int harga = 80000;
        int jumlah = 3;
        int diskon = 20000;
        int ongkir = 15000;

        //int total = harga * jumlah - diskon + ongkir;
        int total = (harga - diskon) * jumlah + ongkir;
        System.out.println(total);
        */
    
        /*
        // NO. 2
        int harga = 500000;
        int diskon = 20;
        
        int total = harga - harga * diskon / 100;
        System.out.println("TOTAL = " + harga + " - (" + harga*diskon + "/100) = " + total);
        */
        /*
        //NO. 2 - ALTERNATIF
        int harga = 500000;
        double diskon = 20;
        
        double total = harga - (diskon / 100 * harga);
        System.out.println("TOTAL = " + harga + " - " + diskon/100 + " * " + harga + " = " + total);
        */
        
        /*
        //NO. 3
        int a = 10;
        int b = 3;

        int x = a + b * 2;
        int y = (a + b) * 2;
        int z = a + b * 2 - 4;
        int e = a/2 + b*7;

        System.out.println(e);
        System.out.println(y);
        System.out.println(z);
        */
        
        /*
        //NO. 4
        int totalBarang = 47;
        int kardusPenuh = totalBarang/10;
        int sisaBarang = totalBarang%10;
        int jumlahKardus = 5;
        boolean adaKardusKosong = totalBarang <= (jumlahKardus-1) * 10;
        
        System.out.println(kardusPenuh);
        System.out.println(sisaBarang);
        System.out.println(adaKosong);
        */
        
        /*
        //NO. 5
        int harga = 100000;
        int jumlah = 2;
        int diskon = 10;
        
        int totalA = harga * jumlah - diskon / 100 * harga;
        int totalB = harga * jumlah - (harga * jumlah * diskon / 100);
        
        System.out.println(totalA);
        System.out.println(totalB);
        */
        
        /*
        //NO. 6
        int nilai = 75;
        int kehadiran = 60;
        boolean syaratNilai = nilai >= 70;
        boolean syaratKehadiran = kehadiran >= 75;
        boolean bolehUjian = syaratNilai && syaratKehadiran;
        System.out.println(bolehUjian);
        */
        
        /*
        //NO. 7
        int hargaLaptop = 7500000;
        int jumlah = 2;
        int diskonPersen = 10;
        int ongkir = 50000;
        
        //int total = hargaLaptop * jumlah - (diskonPersen * hargaLaptop * jumlah / 100) + ongkir;
        int total = hargaLaptop * jumlah - diskonPersen / 100 * hargaLaptop + ongkir;
        System.out.println(total);
        */
        
        /*
        //NO. 8
        int a = 20;
        int b = 6;
        int c = 4;
        //int hasil = a + b * c - a / b;
        int hasil = (a + b) * c - a / b;
        
        System.out.println(hasil);
        */
        
        
        //NO. 9 
        int harga = 120000;
        int jumlah = 5;
        int diskon = 50000;
        int ongkir = 25000;
        //int total = harga * jumlah - diskon + ongkir;
        //boolean gratisOngkir = total >= 500000;
        
        int hargaBarang = harga * jumlah - diskon;
        int penentuanOngkir = (hargaBarang >= 500000) ? 0 : ongkir;
        int total = hargaBarang + penentuanOngkir;
        
        System.out.println(total);
        System.out.println(penentuanOngkir);
        
    }   
}
