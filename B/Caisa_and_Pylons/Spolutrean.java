import java.util.*;
 
public class CaisaAndPylons {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int answer = 0;
        for(int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            if(x > answer) {
                answer = x;
            }
        }
        System.out.print(answer);
        scanner.close();
    }
}