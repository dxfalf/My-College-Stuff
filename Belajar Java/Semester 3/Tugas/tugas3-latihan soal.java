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
//SOAL 1 - Sistem Kelulusan
/*
public class soal1 {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner (System.in);
        int nilai;
        char grade = '-';
        
        System.out.print("Masukkan nilai (0-100) = ");
        nilai = keyboard.nextInt();
            
        if (nilai >= 0 && nilai <= 100){
            if (nilai >= 85){
                grade = 'A';
            } else if (nilai >= 75){
                grade = 'B';
            } else if (nilai >= 65){
                grade = 'C';
            } else if (nilai >= 50){
                grade = 'D';
            } else {
                grade = 'E';
            }
        System.out.println("Nilai = " + nilai); 
        System.out.println("Grade = " + grade);
            if (nilai >= 65){
                System.out.println("ANDA LULUS MATA KULIAH, HORAYYYY!!!");
            } else {
                System.out.println("ANDA TIDAK LULUS MATA KULIAH");
            } 
        } else {
            System.out.println("Input tidak valid");
        }
    }
}
*/

//SOAL 2 - Sistem Login
/*
public class soal2 {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner (System.in);
        String username = "mahasiswa";
        String pw = "jawa123";
        String inputUsername, inputPw;
        
        System.out.print("Masukkan Username = ");
        inputUsername = keyboard.nextLine();
        
        if (inputUsername.equals(username)){
            System.out.print("Masukkan password = ");
            inputPw = keyboard.nextLine();
            if (inputPw.equals(pw)){
                System.out.println("Login Berhasil");
            } else {
                System.out.println("Password salah");
            }
        }else{
            System.out.println("Username tidak ditemukan");
        }
    }
}
*/

//SOAL 3 - Sistem Belanja
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
