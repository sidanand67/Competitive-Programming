#include<bits/stdc++.h>
#define twolong long long
using namespace std;
int main()
{
    twolong i,j,length,count,width;
    char office[101][101],color;
    while(cin>>length>>width>>color)
        {
        for(i=0;i<length;i++)
        {
            for(j=0;j<width;j++)
            {
                cin>>office[i][j];
            }
        }
        count=0;
        bool mark[100];
        for(i='A';i<='Z';i++)
            mark[i]=0;

        mark[color]=1;
        mark['.']=1;
        for(i=0;i<length;i++)
            {
            for(j=0;j<width;j++)
            {
                if(office[i][j]==color)
                {
                    if(mark[office[i][j+1]]==0 && j+1<width)
                    {
                            count++;
                            mark[office[i][j+1]]=1;
                    }
                    if(mark[office[i][j-1]]==0 && j-1>=0)
                    {
                            count++;
                            mark[office[i][j-1]]=1;
                    }
                    if(mark[office[i+1][j]]==0 && i+1<length)
                    {
                            count++;
                            mark[office[i+1][j]]=1;
                    }
                    if(mark[office[i-1][j]]==0 && i-1>=0)
                    {
                            count++;
                            mark[office[i-1][j]]=1;
                    }
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
