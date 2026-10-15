package tugas3;

import java.util.Scanner;
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
