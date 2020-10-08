#include <iostream>
#include <string>
 
int main()
{
	int n;		// n = number of stones
	std::cin>>n;
	std::string stones;
	std::cin>>stones;
	int ans = 0;
 
	for (int i = 1; i < stones.length(); ++i)
	{
		if(stones[i] == stones[i-1])
		{
			ans++;
		}	
	}
	
	std::cout<<ans<<"\n";
}
