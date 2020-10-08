package B.Sum_of_Digits;

import java.util.Scanner;

public class DragonBaronDev {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine(); //Get the users input and store it as string 
        int lenght = n.length(); // Stores the strings length
        while(lenght > 1){ //As long as the strings size is smaller than 1, meaning smaller than 10
            int r = 0; //The resulting number
            char[] stringToCharArr = n.toCharArray();// Get every letter = number and store it inside the array
            for (char c : stringToCharArr) {
                r+= Character.getNumericValue(c); //Add all numbers together and store it in r
                n = Integer.toString(r);//Create a new string using the result
            }
            lenght = n.length(); //Assign new length
        }
        System.out.println(n); //if its done return the vaulue
        sc.close();
    }
}
