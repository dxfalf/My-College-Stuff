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
