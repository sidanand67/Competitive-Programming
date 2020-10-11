import java.util.Scanner;


//Problem : http://codeforces.com/contest/59/problem/B
//Language : java

public class DragonBaronDev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n");
        int n = sc.nextInt(); //Number of camomiles
        int[] a = new int[n]; //number of petals
        int maxCountOfFlowers = 0;
        //Get for every flowers the amount of petals and store it inside the array
        for(int i = 0; i < n; i++){
            System.out.println("Enter the number of petals | " + (n-i-1) + " times left");
            a[i] = sc.nextInt();

        }
        sc.close();
        //She starts at the index 1 and says : He loves me. At the second petals she says : Doesnt love me
        //At every 2n + 1 petal she ends up saying he loves her, so every flower with an odd number is acceptable
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0 ) break; //Number of petals is even
            else maxCountOfFlowers++; //if the number isnt even, it is odd and counts
        }
        //Solution
        System.out.println(maxCountOfFlowers);
    }
}
