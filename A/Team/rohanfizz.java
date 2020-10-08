    import java.util.*;
     
    public class jsol{
        public static Scanner scn = new Scanner(System.in);
        
     
        public static void team(){
            int n = scn.nextInt();
            int[][] arr = new int[n][3];
            for(int i = 0;i<n;i++){
                for(int j = 0;j<3;j++){
                    arr[i][j] =scn.nextInt();
                }
            }
     
            int count = 0;
            
            for(int i = 0;i<n;i++){
                int cc = 0;
                for(int j = 0;j<3;j++){
                    cc+=arr[i][j];
                    if(cc==2){
                        count++;
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
