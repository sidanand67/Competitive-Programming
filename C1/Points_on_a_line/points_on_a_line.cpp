#include <bits/stdc++.h>
using namespace std;
long long MOD=1000000007;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
#define pb push_back
typedef pair<ll,ll> pi;
 
int main()
{
	IOS(); // for faster input output
	ll n,d; //given variables 

	cin>>n>>d; //taking in the values of n and d

	ll ans=0ll; //the final ans that needs to be computed

	std::vector<ll> v(n);  // the n integers that need to be taken are stored in a vector v

	for (int i = 0; i < n; ++i)
	{
	    cin>>v[i];
	} // taking in all the values



	//pos stores the lower bound of the distance d from each of the point we iterate

	for (int i = 0; i <=n-3; ++i)
	{
	    ll pos=lower_bound(v.begin(), v.end(),v[i]+d)-v.begin();
	    if(v[pos]>(v[i]+d) || pos==v.size()) pos--;
	    // cout<<"Pos now "<<pos<<endl;

	    //dist stores distance of the point i from the pos that was calculated

	    ll dist=(pos-i+1);

	    if(dist>=3)
	    {
	      ans+=(dist-1)*(dist-2)/2;
	    } // making changes to ans if condition satisfies
	}

		cout<<ans<<endl; //printing out the answer

return 0;
}