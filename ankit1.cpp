#include<iostream>
#include<string>
using namespace std;

void roman(int n)
{ string s="";
	int o,p,q;
	
	o=n/1000;
	
	switch(o)
	{
		case 1 : s="M";
		break;
		 case  2 : s="MM";
		break;
		 case 3 :  s="MMM";
		 break;
	}
	
	o= (n%1000)/100;
	
	switch(o)
	{
		case 1 : s=s+"C";
		          break;
		case 2 : s=s+"CC";          
		         break;
		case 3 :  s=s+"CCC";
		          break;
        case 4 :  s=s+"CD"; 
		            break;
	    case 5 :   s=s+"D";
		           break;
	   case 6 :    s=s+"DC";
	              break;
		case 7 :   s=s+"DCC";
		           break;
		case 8 :   s=s+"DCCC";
		         break;
		case 9 :   s=s+"CM";
		          break;		 		   		  			   				 				           
	}
	
	
	o=  ((n%1000)%100)/10;
	 
	switch(o)
	{
		case 1 : s=s+"X";
		          break;
		case 2 : s=s+"XX";
		          break;
		case 3 : s=s+"XXX";
		          break;
		case 4 : s=s+"LX";
		          break;
		case 5 : s=s+"L";
		          break;
		case 6 : s=s+"LX";
		         break;
		case 7 : s=s+"LXX";
		         break;
        case 8 : s=s+"LXXX";
		         break;
		case 9 : s=s+"XC";		 				 		 		  		  		  		            
	 } 
	
	o= ((n%1000)%100)%10;
	 
	 switch(o)
	 {
	 	case 1 : s=s+"I";
	 	         break;
	 	case 2 : s=s+"II";
		         break;
		case 3 : s=s+"III";
		        break;
		case 4 : s=s+"IV" ;
		          break;
		case 5 : s=s+"V" ;
		         break;
	    case 6 : s=s+"VI";
		         break;
	    case 7 : s=s+"VII";
		           break;
	    case 8 : s=s+"VIII";
		         break;
		case 9 : s=s+"IX";
		        break;
						 			   			 			           
		
	 }

 cout<<s<<"\n";	
}












int main()
{ int n;
  cin>>n;
   
   roman(n);
   
   
	return 0;
}
