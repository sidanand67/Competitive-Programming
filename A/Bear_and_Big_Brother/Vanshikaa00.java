import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		// Inputting weight of limak
		int a=sc.nextInt();
		// Inputting weight of Bob
		int b=sc.nextInt();	
		/* since limak's wt gets tripled and bob's wt gets doubled every year hence, the variables limakUpdatedWeight and bobUpdatedWeight are used and count variable is used to keep track after how many full years will Limak become strictly larger (strictly heavier) than Bob */
		int limakUpdatedWeight=a,bobUpdatedWeight=b,count=0;
		do{
		    limakUpdatedWeight=limakUpdatedWeight*3;
		    bobUpdatedWeight=bobUpdatedWeight*2;
		    count++;
		}
		while(limakUpdatedWeight<=bobUpdatedWeight);
		System.out.println(count);
	}
}
