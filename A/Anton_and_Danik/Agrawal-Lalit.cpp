#include<iostream>
#include<string>
using namespace std;

int main()
{
	int gamesPlayed;
	string outcomes;
	
	cin>>gamesPlayed;
	cin>>outcomes;
	
	//taking counts of matches won by Anton and Danik
	int As=0,Ds=0;
	
	for(int i=0;i<gamesPlayed;i++)
	{
		if(outcomes[i]=='A')
		As+=1;
		else if(outcomes[i]=='D')
		Ds+=1;
		else
		{cout<<" The input string format is not correct";
		 break;
		}
	}
	
	if(As==Ds && As>0) cout<<"Friendship"<<endl;
	else As>Ds?cout<<"Anton"<<endl:cout<<"Danik"<<endl;
	
	return 0;
}
