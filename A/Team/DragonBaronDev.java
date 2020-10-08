package A.Team;

import java.util.Scanner;

// Problem : http://codeforces.com/contest/231/problem/A
// Language : java


public class DragonBaronDev{

    public static void main(String[] args) {

        //Given numbers
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n");
        int num = sc.nextInt();
        int count = 0;

        for(int i = 0; i < num; i++){
            System.out.println("Enter 3 digits from 0 to 1 | " + (num-i-1) + " times left");
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if(a > 1 || b > 1||c > 1) {System.out.println("Error: Given number is bigger than 1");  i--; count--;} 
            if(a + b + c >= 2) count++;
        }
        System.out.println(count);
        sc.close();
        return;
    }
}