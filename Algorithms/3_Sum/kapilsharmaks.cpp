#include<bits/stdc++.h>
typedef long double LD;
typedef long long LL;
 
using namespace std;
 
vector<vector<int> > threeSum(vector<int> &A) {
    
    vector<vector<int> >ans; // taking answer vector.
    int n=A.size();
    sort(A.begin(),A.end()); // sorting array O(nlogn) as it is a vector.
    
    for(int i=0;i<n;i++)
    {
        int j=i+1,k=n-1;  // pointer j after i th element and k at last element (greatest)of array.
        while(j<k)
        {
            //till j is not greater or equal to k,we will see all combinations which give zero for a single 1.
            long long int sum=0LL+ A[i]+A[j]+A[k];  // 0LL is used to convert it in long long int.
            if(sum>0) k--; // if sum is greater than reduce k,as largest element of array.

            else if(sum<0) j++;// if sum is lesser,increase j.
            
            else
            {
                //if we getb reqired combination,add it to the vextor a of 3 elements.
                vector<int>a(3,0);
                a[0]=A[i];
                a[1]=A[j];
                a[2]=A[k];
                ans.push_back(a); // push your 1st pair in the ans vector.
                
                while(j<k && a[1]==A[j]) j++; // if j repeats once again then skip,as i is always same.
            }
            
        
        }
            while(i<n-2 && A[i+1]==A[i]) i++; // if i repeats ,then i++.
    }
    
    return ans;
}