/*
 Saurabh Vijay
 Github :- https://github.com/SaurabhVj
 problem link:- http://codeforces.com/problemset/problem/231/A
*/
#include<stdio.h>

int main()
{
	int n, petya, vasya, tonya;

	// Input Number of Problems
	scanf("%d",&n);

	int ans=0;

	for(int i = 1; i <=n; ++i) 
	{
		
		scanf("%d %d %d", &petya, &vasya, &tonya);

		if (petya + vasya + tonya >= 2)
		    ans++;
            
	}

	printf("%d\n",ans);
	return 0;
}

/*
Sample Case
2
1 0 0
0 1 1
*/
