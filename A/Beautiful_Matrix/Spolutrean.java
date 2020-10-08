import java.util.Scanner;
public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(scanner.nextInt() == 1) {
                    int rowsToTheMiddle = Math.abs(2 - i);
                    int collumnsToTheMiddle = Math.abs(2 - j);
                    System.out.println(rowsToTheMiddle + collumnsToTheMiddle);
                    scanner.close();
                    return;
                }
            }
        }
    }
}