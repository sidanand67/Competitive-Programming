//https://codeforces.com/problemset/problem/1425/A
//java
import java.util.Scanner;

class DragonBaronDev{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter t");
        int t = sc.nextInt(); //Test cases
        int[] nTestCases = new int[t]; //For every t you get an n
        

        for(int i = 0; i < t; i++){
            System.out.println("Enter N | " + (t-i-1) + " times left");
            nTestCases[i] = sc.nextInt(); //Store n in an array nTestCases
        }
        sc.close();
        for(int i = 0; i < t; i++){
            int n = nTestCases[i];
            int c = 0; // Mr. Chaneks final coin count

            //Both player try to maximize the amount of coins
            //Every player will divide the total amount of n coins by 2 if the amount is even, if not reduce by one 
            //Starting at Mr Chanek
            while(n > 1){ //Game ends at 1 coin left
                //Player one 
                if(n % 2 == 0){ //even?
                    c += n / 2; //Add half of the coins
                    n = n / 2; //Reduce coins left
                }else{
                    c++; //Get one coin
                    n--; //Reduce by one
                }
                //Player two
                if(n % 2 == 0){ //even?
                    n = n / 2; //Reduce coins left
                }else{
                    n--; //Reduce by one
                }
            }
            System.out.println(c);
        }
    }
}