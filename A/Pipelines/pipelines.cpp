#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(ll n)
{
	// to return sum of numbers frmo 1 to n using the startingandard formula
	return (n * (n+1)) / 2;
}

// sum: s s+1 s+2 ... e
ll sum(ll s, ll e)
{
	if(s <= 1)
		return sum(e);


	return sum(e) - sum(s-1);
}

ll minSplitters(ll k, ll n)
{
	ll starting = 1, ending = k;


	//now using binary search to achieve the min splitters since any conbination of numbers
	// can be achieved by using the consecutive numbers from 1....n
	while(starting <=ending)
	{
		ll middle = (starting + ending)/2;
		ll s = sum(middle, k);

		if(s == n)
			return k - middle + 1;

		if(s > n)
			starting = middle+1;
		else
			ending = middle-1;
	}


	//returning the final ans 
	return k - starting + 2;
}

int main()
{

	ll n, k; //taking in the values of n and k as input
	cin>>n>>k;

	if(n == 1)
		cout<<0<<"\n";		// already justarting 1 out flow source existarting
	else if(n <= k)
		cout<<1<<"\n";		// we have 1-n splitter already
	else
	{
		--k;      //reducing n and k by one since 1 splitter can already be used 
		--n;	

		if(sum(k) < n) //declaring the sum function above
			cout<<-1<<"\n"; 
		//if sum<n, thending no possible solution will existarting

		else
			cout<<minSplitters(k, n)<<"\n"; 
		//else call the minSplitter function
	}


 	return 0;
}