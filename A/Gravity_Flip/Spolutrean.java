import java.util.*;
 
public class GravityFlip {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] array = new int[n];
        for(int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }
        Arrays.sort(array);
        for(int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
    }
}