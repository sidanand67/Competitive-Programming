#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
    long long int  n,left,right,i=0,flag=0;
    std::cin >> n;
    vector<long long int> a(n);
    vector<long long int> b(n);
    for(i=0;i<n;i++) std::cin >> a[i];
    for(i=0;i<n;i++){
      b[i]=a[i];    // storing the values of array in new array to compare with sorted array
    }
    sort(a.begin(),a.end());
    i=0;
    while(a[i]==b[i]&&i<n){          // Finding left most element to reverse
      i++;
    }
    left=i;
    i=n-1;
    while(a[i]==b[i]&&i>=0){        // Finding right most element to reverse
      i--;
    }
    right=i;
    if(left==n&&right==-1) {        //Condition to check if the given arary is sorted already
      std::cout << "yes" << '\n';
      std::cout << "1 1" ;
    }
    else{
    reverse(b.begin()+left,b.begin()+right+1);    //reversing the array in given segment
    i=0;
    while(i<n){                   // Comparing the final array and the sorted array
      if (a[i]!=b[i]) {
        flag=1;
        break;
      }
      i++;
    }
    if(flag) std::cout << "no" ;  //If Both arrays are not equal then it can't be sorted by reversing one segment.
    else{
      std::cout << "yes" << '\n';
      std::cout << left+1<<" "<<right+1 ;
	}
}
	return 0;
}
