#include<bits/stdc++.h>
#define LOOP(i,n) for (int i = 1; i <= n; i++)
#define loop(i,n) for(int i = 0;i<n;i++)
#define REP(i,a,b) for(int i = a;i<=b;i++)
#define lli long long int
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vlli vector<lli>
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
    
using namespace std;
    
int main(){
    int n; cin>>n;
    vi arr(n,0);
    for(int i = 0;i<n;i++) cin>>arr[i];

    int l = 0; int r = n-1;
    int sereja = 0; int dima = 0; bool isSerejaTurn = true;
    while(l<=r){
        if(isSerejaTurn) sereja+= arr[l]>arr[r]?arr[l++]:arr[r--];
        else dima+= arr[l]>arr[r]?arr[l++]:arr[r--];
        isSerejaTurn = !isSerejaTurn;
    }
    cout<<sereja<<" "<<dima<<endl;
}
