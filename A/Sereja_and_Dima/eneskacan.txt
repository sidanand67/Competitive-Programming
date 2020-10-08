/*
** Problem Name: Sereja and Dima
** Problem Link: https://codeforces.com/contest/381/problem/A
** Sol Language: Java
*/

import java.util.*;

public class eneskacan{

     public static void main(String []args){
		 
        // get input from user
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        ArrayList<Integer> cards = new ArrayList<>();
        for(int i = 0; i < n; i++) cards.add(sc.nextInt());
        
        // calculate scores
        int scoreSan = 0;
        int scoreDim = 0;
        
        for(int i = 0; i < n; i++) {
        	int selection = Math.max(cards.get(0), cards.get(cards.size() - 1));
        	
        	if(i % 2 == 0) {
           	 scoreSan += selection;
        	} else {
           	 scoreDim += selection;
        	}
        	
            if(cards.get(0) == selection) {
            	cards.remove(0);
            } else {
            	cards.remove(cards.size() - 1);
            }
        }
        
        // return answer
        System.out.print(scoreSan + " " + scoreDim);
     }
}