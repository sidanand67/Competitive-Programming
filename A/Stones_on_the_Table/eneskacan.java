/*
** Problem Name: Stones on the Table
** Problem Link: https://codeforces.com/contest/266/problem/A
** Sol Language: Java
*/

import java.util.*;

public class Main {

	public static void main(String[] args) {
		
		// get input from user
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String stones = sc.next();
        
        // set last stone to the first stone 
        char lastStone = stones.charAt(0);
        
        int result = 0;
        int temp = 0;
        
        // check stones from index 1
        for(int i = 1; i < n; i++) {
        	if(stones.charAt(i) == lastStone) {
        		temp ++;
        	} else {
        		result += temp;
        		temp = 0;
        		lastStone = stones.charAt(i);
        	}
        }
        result += temp;
        
        // return answer
        System.out.print(result);
	}
}