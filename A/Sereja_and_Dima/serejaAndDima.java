import java.util.*;

class jsol{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for(int i = 0;i<n;i++) arr[i] = scn.nextInt();
        int l = 0; int r = n-1; boolean isSerejaTurn = true;
        int sereja = 0; int dima = 0;
        while(l<=r){
            if(isSerejaTurn) sereja+= arr[l]>arr[r]?arr[l++]:arr[r--];
            else dima+= arr[l]>arr[r]?arr[l++]:arr[r--];
            isSerejaTurn = !isSerejaTurn;
        }
        System.out.println(sereja + " "+ dima);
    }
}
