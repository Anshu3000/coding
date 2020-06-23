#include<bits/stdc++.h>
using namespace std;

 void lps1(int l[],int m, string pat)
 {  int len=0;
 	int i=1;
 	
 	while(i<m)
 	{
 		if(pat[len]==pat[i]){
 		//	cout<<len<<"m"<<"\n";
			 len++;
 		  l[i]=len;
		   i++;	
		 }else{
		 	 //cout<<l[len-1]<<"p\n";
		 	 if(len!=0)
              len=l[len-1];
			 else
			  {  
			    l[i]=0;
			     i++;
				} 		 	
		 } 		
 		
 		
	 }
 	
 }


int main()
{ string txt,pat;
  cin>>txt>>pat;
  int l1=txt.length();
   int l2=pat.length();
   
   cout<<txt<<" "<<pat<<" ";
   
  int l[l2]={0};
   
   lps1(l,l2,pat);

  int i=0;
  int j=0,flag=1;	
  
  for(int k=0;k<l2;k++)
  {cout<<l[k]<<" ";
  }
	cout<<"\n";
	while(i<l1)
	{
		if(txt[i]==pat[j])
		{i++;
		 j++;
		}
		
		if(j==l2){
		  cout<<"string match found"<<i-l2<<"\n";
		  flag=0;	  
		}else if(j<l1&&txt[i]!=pat[j]){
			
			if(j!=0)
			j=l[j-1];
			else
			i++;
		}
		
		
	}
	
 if(flag)
 cout<<"string not found";
	
	return 0;
}
