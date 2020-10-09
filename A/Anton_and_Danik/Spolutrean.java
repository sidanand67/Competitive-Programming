import java.util.*;
import java.lang.*;
 
public class AntonAndDanik {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);       
        int n = scanner.nextInt();
        String s = scanner.next();
        int anton = 0, danik = 0;
        for(int i = 0; i < n; i++)
        {
            if(s.charAt(i) == 'A') {
                anton++;
            } else {
                danik++;    
            }       
        }

        if(anton > danik) {
            System.out.println("Anton");
        } else if(anton < danik) {
            System.out.println("Danik");
        } else {
            System.out.println("Friendship");
        }
        scanner.close();
	}
}