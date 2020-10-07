#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0,i;
    char s[50];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
