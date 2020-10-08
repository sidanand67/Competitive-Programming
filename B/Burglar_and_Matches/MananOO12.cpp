//A simple solution to problem 16B
#include<bits/stdc++.h>

#define twolong long long

using namespace std;

//structure for storing matches and box
struct data
{
    twolong mat,box;
}
W[50];

bool largest(data f,data s)
{
   if(f.mat>s.mat)return true;
   return false;
}
int main()
{
    twolong i,n,Box;
    while(cin>>Box>>n)
        {
        for(i=0;i<n;i++)
        {
            cin>>W[i].box>>W[i].mat;
        }
        sort(W,W+n,largest);
        twolong ans=0;
        for(i=0;i<n;i++){
            if(W[i].box<=Box)
            {
                ans+=(W[i].box)*(W[i].mat);
                Box-=W[i].box;
            }
            else
            {
                ans+=Box*(W[i].mat);
                Box=0;
            }
            if(Box<=0)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}