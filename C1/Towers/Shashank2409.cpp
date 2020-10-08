/* Problem link - https://codeforces.com/contest/479/problem/B */

#include<iostream>
#include<queue>

using namespace std;
#define ll long long 
#define pair_int pair<int , int> 

int main(){
    int n , k;
    cin>>n>>k;
    int a[n];
    /* Priority queues for keeping track of the maximum and minimum elements after each step */
    priority_queue<pair_int> max_pq;
    priority_queue<pair_int , vector<pair_int> , greater<pair_int> > min_pq;
    
    /* Taking input and adding the numbers in both the priority queues. */
    for(int i = 0; i < n; i++){
        cin>>a[i];
        /* This priority queue will store the numbers in descending order */
        max_pq.push({a[i] , i});
        
        /* This priority queue will store the numbers in ascending order */
        min_pq.push({a[i] , i});
    }
    
    /* These variables will keep track of the no of moves used and the indices of elements in ith operation */
    int moves_count = 0;
    vector<pair_int> moves;
    
    /* In this loop, we pop the minimum and maximum element left and perform the operation on them */
    for(; moves_count < k; moves_count++){
        pair_int min_elem = min_pq.top() , max_elem = max_pq.top();
        
        /* If at any time, the minimum element becomes equal to the maximum element 
        before or after the operation, the operation would be useless and hence,
        we break from this loop */
        if(min_elem.first + 1 >= max_elem.first){
            break;
        }
        min_pq.pop() , max_pq.pop();
        min_elem.first++;
        max_elem.first--;
        min_pq.push(min_elem);
        max_pq.push(max_elem);


        moves.push_back({max_elem.second + 1 , min_elem.second + 1});
    }
    
    /* Calculating the difference of the maximum and minimum elements left and printing the answer */
    pair_int min_elem = min_pq.top() , max_elem = max_pq.top();
    int diff = max_elem.first - min_elem.first;
    cout<<diff<<" "<<moves.size()<<"\n";
    for(int i = 0; i < moves.size(); i++){
        cout<<moves[i].first<<" "<<moves[i].second<<"\n";
    }
}