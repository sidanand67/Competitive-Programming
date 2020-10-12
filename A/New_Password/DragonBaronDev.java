package A.New_Password;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class DragonBaronDev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n; //Number of letters
        int k; //Number of distinct sysmbols
        List<Character> password = new ArrayList<Character>(); //Outcome
        List<Integer> randInt = new ArrayList<Integer>(); //List of all letters represented by int
        System.out.println("Enter n");
        n = sc.nextInt();
        System.out.println("Enter k");
        k = sc.nextInt();

        for (int i = 0; i < k; i++) {//Generate k distinct numbers
            randInt.add((int)(Math.random() * 1000 + 1)); //Random number between 0 and 1000 - stores it in the list
        }
        
        int difference = n - k;
        for(int i = 0; i < difference; i++){
            randInt.add(randInt.get(i));
        }

        //randInt and n should have the same size now and randInt should be alternating until k(4) : 1 2 3 4 1 2 3 4 1 2 3 4 - n times

        //Convert the list to an int
        for(int i = 0; i < n; i++){
            password.add((char)(randInt.get(i) + 97)); //Reach letters and store them
            //Debugging : Every value = System.out.println(password.get(i));
        }

        //System.out.println(String.valueOf(password)); //Convert to string

        sc.close();
    }
}
