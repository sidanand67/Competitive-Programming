import java.util.List;
import java.util.Scanner;

class DragonBaronDev{
    public static void main(String[] args) {
        //a starts at int = 97
        // z = 97 + 25
        //Nth letter = 97 + nth
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String:");
        String sequence = sc.nextLine(); //Input
        int finalCount = 0;
        int[] charsToInt = new int[sequence.length() + 1]; //+1 starting at a
        charsToInt[0] = (int)'a';
        for(int i = 1; i < charsToInt.length; i++){
            charsToInt[i] = (int)(sequence.charAt(i - 1)); //Store all letters in a list as numbers
        }
        for(int i = 0; i < charsToInt.length - 1; i++){

            if(Math.abs(charsToInt[i] - charsToInt[i+1]) <= 13){//Shortest way around clockwise
                finalCount += Math.abs(charsToInt[i] - charsToInt[i+1]); //Add the value
            }else if((Math.abs(charsToInt[i] - charsToInt[i+1]) > 13)){//Counterclockwise - go around the other way
                finalCount += 26 - Math.abs(charsToInt[i] - charsToInt[i+1]);
            }
        }
        System.out.println(finalCount);
        sc.close();
    }
}