/*
** Problem Name: Boy or Girl
** Problem Link: https://codeforces.com/contest/236/problem/A
** Sol Language: Java
*/

import java.util.*;

public class Main{

     public static void main(String []args){
		 
        // get input from user
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        
        // count distinct chars
        int[] count = new int[26];
        Arrays.fill(count, 0);
        
        for(char c : input.toCharArray()) count[c - 97] = 1;
        
        int sum = 0;
        for(int i : count) sum += i;
        
        // return answer
        if(sum % 2 == 0) {
            System.out.print("CHAT WITH HER!");
        } else {
            System.out.print("IGNORE HIM!");
        }
     }
}