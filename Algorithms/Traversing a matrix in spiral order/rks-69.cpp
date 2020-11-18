void spiralTraversal(int **a, int n)
{
    int rs=0, cs=0;     // RowStart and Column Start
    int re=n-1, ce=n-1;  // RowEnd & columnEnd
    while(rs<=re && cs<=ce)
    {
        int i=rs, j=cs;
        for(j=cs; j<=ce; j++)
            cout<<" "<<a[i][j];
        for(i=rs+1, j--; i<=re; i++)
            cout<<" "<<a[i][j];
        for(j=ce-1, i--; j>=cs; j--)
            cout<<" "<<a[i][j];
        for(i=re-1, j++; i>=rs+1; i--)
            cout<<" "<<a[i][j];
        rs++; cs++; re--; ce--;
    }
}
