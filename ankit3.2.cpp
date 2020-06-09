#include<iostream>
using namespace std;

int isBool(int a[],int n, int q)
{
	int l=(1<<n)-1;
	
	for(int i=1;i<=l;i++)
	{   int m=i;
	      int j=0,sum=0;
	      
		while(m)
		{
			if(m&1)
			{ sum=sum+a[j];
			  // cout<<a[j];
		    }
		    
			j++;
			m=m>>1;
		}
		if(sum==q)
		return 1;
		//cout<<"\n";
	}
	
return 0;		
}







int main()
{ ios_base::sync_with_stdio(0);
 cin.tie(0);
  int t;
  cin>>t;
  
  while(t--)
  { int n,q;
  	cin>>n>>q;
  	int a[n];
  	
  	for(int i=0;i<n;i++)
  	{ cin>>a[i];	  }
  	
  	int ans=isBool(a,n,q);
  	
  	if(ans)
  	cout<<"yes\n";
  	else
  	cout<<"NO\n";
  	
  }
	
	
	return 0;
}
