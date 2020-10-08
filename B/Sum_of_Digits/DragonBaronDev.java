package B.Sum_of_Digits;

import java.util.Scanner;

public class DragonBaronDev {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        int lenght = n.length();
        while(lenght > 1){
            int r = 0;
            char[] stringToCharArr = n.toCharArray();//"11" -> "1" "1"
            for (char c : stringToCharArr) {
                r+= Character.getNumericValue(c); //1+1 = 2
                n = Integer.toString(r);
            }
            lenght = n.length();
        }
        System.out.println(n);
        sc.close();
    }
}
