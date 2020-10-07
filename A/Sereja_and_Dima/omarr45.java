import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
        Scanner in=new Scanner(System.in);
 
        int n=in.nextInt();
 
        int[]value=new int[n];
 
        // Read user input
        for(int i=0;i<value.length;i++)
        {
            value[i]=in.nextInt();
        }
 
        int l = 0;
        int r = n-1;
 
        int sScore=0;
        int dScore=0;
 
        // we will use this boolean
        // to switch between players' turn
        boolean p=true;
 
        while(l<=r)
        {
            if(value[l]>=value[r])
            {
              if(p)
                  sScore+=value[l];
              else
                  dScore+=value[l];
 
              l++;
            }
 
            else if(value[r]>value[l])
            {
                if(p)
                    sScore+=value[r];
                else
                    dScore+=value[r];
 
                r--;
            }
 
            // Switch the boolean
            p != p;
        }
 
        System.out.println( s + " " + d);
 
   }
}