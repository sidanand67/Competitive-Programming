#include<bits/stdc++.h>
using namespace std;
struct val{
	int pi;
	int i;
};
bool my_cmp(val a,val b)
{
    // smallest comes first
    return a.pi < b.pi;
}
int main(){
	int n;
	cin>>n;
	vector<val> peps;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		peps.push_back({num,i+1});
	}
	sort(peps.begin(),peps.end(),my_cmp);
  	for(int i=0;i<n;i++){
		cout<<peps[i].i<<" ";
	}
	return 0;
}