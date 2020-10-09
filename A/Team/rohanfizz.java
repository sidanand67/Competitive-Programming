    import java.util.*;
     
    public class jsol{
        public static Scanner scn = new Scanner(System.in);
        
     
        public static void team(){
            //Inputs
            int n = scn.nextInt();
            int[][] arr = new int[n][3];
            for(int i = 0;i<n;i++){
                for(int j = 0;j<3;j++){
                    arr[i][j] =scn.nextInt();
                }
            }
            
            //Keeps track of answer
            int count = 0;
            
            for(int i = 0;i<n;i++){
                int currentCount = 0;      //counts who is sure about the solution
                for(int j = 0;j<3;j++){
                    cc+=arr[i][j];
                    if(cc==2){
                        count++;            // if 2 people are sure, it is sufficient to consider as an answer
                        break;
                    }
                }
            }
            System.out.println(count);
     
        }
     
     
        public static void main(String[] args){
            team();
        }
    }
