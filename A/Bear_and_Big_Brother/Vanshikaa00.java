import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();	
		int v1=a,v2=b,ct=0;
		do{
		    v1=v1*3;
		    v2=v2*2;
		    ct++;
		}
		while(v1<=v2);
		System.out.println(ct);
	}
}
