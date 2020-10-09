import java.util.*;
class jsol{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0;i<n;i++) arr[i] = scn.nextInt();
        int l = 0; int r = n-1;                         //using two pointer approach
        boolean isSerejaTurn = true;                    //will keep track of whose turn is it
        int sereja = 0; int dima = 0;                   //sereja and dima's answer so far
        while(l<=r){
            if(isSerejaTurn) sereja+= arr[l]>arr[r]?arr[l++]:arr[r--];  // Sereja's turn- sereja will pick the largest of arr[l],arr[r]
            else dima+= arr[l]>arr[r]?arr[l++]:arr[r--];                // Dima's turn- sereja will pick the largest of arr[l],arr[r]
            isSerejaTurn = !isSerejaTurn;
        }
        System.out.println(sereja + " "+ dima);
    }
}
