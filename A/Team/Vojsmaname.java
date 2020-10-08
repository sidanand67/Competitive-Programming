import java.util.Scanner;

public class Vojsmaname {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int numberOfQuestions = sc.nextInt(); // Total number of questions presented to the friends


        int totalQuestionsAnswered = 0; // The number of questions they decide to answer

        while (numberOfQuestions > 0) {

            int decisionOfFriends[] = new int[3]; //decision of each friend for each question. The value is not stored.
            int sumOfArray = 0;
            for (int i = 0; i < 3; i++) {
                decisionOfFriends[i] = sc.nextInt();

                sumOfArray += decisionOfFriends[i];
            }
            if (sumOfArray >= 2) {            // check if more than two or more friends are sure about the answer
                totalQuestionsAnswered += 1; // increment the number of questions answered by 1
            }
            numberOfQuestions -= 1;
        }
        System.out.println(totalQuestionsAnswered); // print out final answer

    }

}//End of main


