    #include<bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
    	long long int t;
    	cin>>t;
    	while(t--){
    		long long int n;
    		cin>>n;
    		long long int a[n];
    		for(int i=0;i<n;i++){
    			cin>>a[i];
    		}
    		if(a[0]+a[1]<=a[n-1]){//checking condition for bad triangle
    			cout<<"1 2 "<<n<<endl;
    		}
    		else{
    			cout<<-1<<endl;
    		}
    	}
     
    	return 0;
    }
