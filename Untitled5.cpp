#include<iostream>
using namespace std;

void print(int str[],int n, int out)
{
	if(n==0)
	 { cout<<out<<"\n";
	 	return ;
	 }
	 
	 print(str+1,n-1 ,out);
	 print(str+1,n-1,out+str[0]);
	
}



int main()
{ int str[5],out=0;

 for(int i=0;i<5;i++)
    cin>>str[i];
    
    print(str,5,out);
	return 0;
}
