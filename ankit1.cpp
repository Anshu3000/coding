#include<bits/stdc++.h>
using namespace std;

 #define max 200


 int main()
 { int n,m,c=0;
   cin>>n;
 
   int a[max]={0};
   	
   	a[0]=1;
   	int l=1;
   	 for(int i=2;i<=n;i++)
   	 { c=0;
   	   	for(int j=0;j<l;j++)
   	   	{  m=a[j];
   	   	   m=m*i+c;
   	   	    if(m>=10)
   	   	     {  a[j]=m%10;
   	   	     	c=m/10;
			  }else{
			  	a[j]=m;
			  	c=0;
			  }
   	   		
		  }
		 
		 if(c!=0)
		 { a[l]=c;
		   l++;
		  } 
   	 	
	 }
   	
   	cout<<"p\n";
 	for(int i=l-1;i>=0;i--)
 	 cout<<a[i];
 	
 	return 0;
 }
