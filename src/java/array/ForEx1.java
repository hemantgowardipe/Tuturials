package src.java.array;

import java.util.Scanner;

public class ForEx1 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter number:");
        int n = sc.nextInt();
        System.out.println("Even number");
        for(int i=1; i<=n; i++){
            if (i % 2==0) {
                System.out.println(i+"");
            }
        }
        System.out.println("\nodd Number");
        for (int i=1;i<=n;i++){
            if(i%2!=0){
                System.out.println(i+"");
            }
        }


        }
}
