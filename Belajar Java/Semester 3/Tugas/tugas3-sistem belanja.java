/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tugas3;

/**
 *
 * @author dafaa
 */
import java.util.Scanner;
public class soal3 {
    public static void main(String[] args) {
    Scanner keyboard = new Scanner (System.in);
    String kartu;
    int belanja, diskon = 0;
    System.out.print("Apakah anda memiliki kartu (y/n) = ");
    kartu = keyboard.nextLine();
    
        
    if (kartu.equals("y") || kartu.equals ("n")){
        System.out.print("Jumlah belanjaan = Rp. ");
        belanja = keyboard.nextInt();
        if (kartu.equals("y")){
            if (belanja >= 500000) {
                diskon = 50000;
            } else if (belanja >= 100000) {
                diskon = 15000;
            } else {
                System.out.println("Anda tidak mendapatkan diskon");
            }
        } else {
            if (belanja >= 100000) {
                diskon = 5000;
            } else {
                System.out.println("Anda tidak mendapatkan diskon");
            }
        }
        
        System.out.println("\n==== HASIL AKHIR ====");
        System.out.println("Jumlah belanjaan anda = Rp. " + belanja);
        System.out.println("Diskon yang anda peroleh = Rp. " + diskon);
        int total = belanja - diskon;
        System.out.println("Total pembayaran anda = Rp. " + total);
        
    }
     else {
        System.out.println("Input tidak valid");
        }
    
    }
}
