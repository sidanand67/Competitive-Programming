/*
** Problem Name: Word
** Problem Link: https://codeforces.com/contest/59/problem/A
** Sol Language: Java
*/

import java.util.*;

public class Main {

	public static void main(String[] args) {
		
		// get input from user
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        
        // count number of upper case chars
        int upperCaseCount = 0;
        
        for(int i = 0; i < input.length(); i++)
        	if(Character.isUpperCase(input.charAt(i))) upperCaseCount ++;
        
        // return answer
        if(upperCaseCount > input.length() / 2) {
        	System.out.print(input.toUpperCase());
        } else {
        	System.out.println(input.toLowerCase());
        }        
	}
}