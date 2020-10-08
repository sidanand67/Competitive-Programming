import java.util.Scanner;

public class DragonBaronDev
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n");
        int n = sc.nextInt();
        System.out.println("Enter k");
        int k = sc.nextInt();
        sc.close();

        for(int i = 0; i < k; i++){ //k subtractions

            if(n % 10 != 0){ //Makes sure the last letter isnt a 0
                n--;//Subtract one
            }else{ //If the last letter is a 0, the number has to be divided by 10
                n=n / 10;
            }
        }
        //Print the solution
        System.out.println(n);

    }
}
