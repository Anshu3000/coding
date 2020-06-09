#include<bits/stdc++.h>
using namespace std;
int o1=0;

 void per(string s,map<char,int> &m , char ch[],int l,vector<char> &ch1)
 { int r=s.size();
 	
 	if(l==r)
 	 { cout<<o1++<<"  ";
     	 for(int i=0;i<r ;i++)
    	  {  cout<<ch[i];}
 	
 	     cout<<"\n";
 	    	return ;
	  }
 	
 	 for(int i=0; i<m.size();i++)
 	 { 
	     if(m[ch1[i]]==0)
		   continue; 
 	  
 	    m[ch1[i]]--;
		ch[l]=ch1[i]; 
	  
	   per(s,m,ch,l+1,ch1);	 
		 m[ch1[i]]++; 	
	  }
 	
 	
 }


int main()
{ string s;
	cin>>s;
	
  map<char,int> m;
  //set<char> st1;	
  vector<char> ch1;
  	char ch[s.length()];
	
	for(int i=0;i<s.length();i++)
	{ m[s[i]]++; 
	 
	}
	
	map<char,int>::iterator it=m.begin();
	for(int i=0;it!=m.end();it++)
	{
		ch1.push_back(it->first);
	}
	
	per(s,m,ch,0,ch1);
	cout<<"PP\n";
	for(int i=0;i<s.length();i++)
	 cout<<ch[i]<<" ";
	
	return 0;
}
