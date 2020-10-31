    #include<bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
    	long long int t;
    	cin>>t;
    	while(t--){
    		long long int n,c=0;
    		cin>>n;
    		int a[n];
    		set<int> s;
    		for(int i=0;i<n;i++){
    			cin>>a[i];
    			s.insert(a[i]); //Finding unique values
     
     
    		}
    		if(s.size()>1){
    			cout<<1<<endl;
    		}
    		else cout<<n<<endl;
     
     
    	}
     
    	return 0;
    }
