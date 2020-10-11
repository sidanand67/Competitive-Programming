import java.util.*;
 
public class CaisaAndPylons {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int countOfPylons = scanner.nextInt();
        int requiredFirstPylonHeight = 0;
        for(int i = 0; i < countOfPylons; i++) {
            int currentPylonHeight = scanner.nextInt();
            if(currentPylonHeight > requiredFirstPylonHeight) {
                requiredFirstPylonHeight = currentPylonHeight;
            }
        }
        System.out.print(requiredFirstPylonHeight);
        scanner.close();
    }
}