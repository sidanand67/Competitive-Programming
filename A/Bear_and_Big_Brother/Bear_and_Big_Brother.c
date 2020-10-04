#include <stdio.h>

int main()
{
    	int a,b,ans=0;
    	scanf("%d",&a);
    	scanf("%d",&b);
    	while(a<=b) 
    	{
    		a*=3;
    		b*=2;
    		ans++;
    	}
    	printf("%d\n", ans);
}
