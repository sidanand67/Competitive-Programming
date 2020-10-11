package A.Remove_Smallest;

import java.util.Arrays;
import java.util.Scanner;


public class DragonBaronDev {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = 0; //Test cases
        int n = 0; // Lenght of array
        boolean solution = true;

        System.out.println("Enter t");
        t = sc.nextInt();
        for(int i = 0; i < t; i++){
            solution = true;
            System.out.println("Enter n");
            n = sc.nextInt();
            int[] a = new int[n];

            //Get all integer for the array
            for(int k = 0; k < n; k++){
                System.out.println("Enter the element at the arrays " + k + "th position");
                a[k] = sc.nextInt();
            }
            //Sort by smallest number
            Arrays.sort(a);
            for(int k = 1; k < n; k++){
                if(Math.abs(a[k - 1] - a[k]) > 1 ) solution = false;
            }
            System.out.println(solution ? "Yes" : "No");
        }
        sc.close();
    }

}
