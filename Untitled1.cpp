#include<iostream>
using namespace std;
#define D 16

 int row[]={-2,-1,1,2,2,1,-1,2};
 int col[]={1,2,2,1,-1,-2,-2,-1},i=0;
 
 bool check1(int chessBoard[D][D],int n,int r,int c)
 {
     return (r>=0&&r<n)&&(c>=0&&c<n)&&(chessBoard[r][c]==0);
 }
 
 
 bool  solveKnight(int chessBoard[D][D] ,int n ,int move, int curRow ,int curCol)
   { 
       if(move==n*n)
        { return true;
		}
   	
   	 for(int curdir=0; curdir<8; curdir++)
    { 
        int nextRdir=curRow+row[curdir];
        int nextCdir=curCol+col[curdir];
   	 	
   	 	if(check1(chessBoard,n,nextRdir,nextCdir)==true)
   	 	{ chessBoard[nextRdir][nextCdir]=move+1;
   	 	  bool ist=solveKnight(chessBoard,n,move+1,nextRdir,nextCdir);
			 
			 if(ist==true)
			  { cout<<"true for"<<nextRdir<<" "<<nextCdir<<"\n";
			    return true;	
			 }
			 cout<<"false for"<<nextRdir<<" "<<nextCdir<<"\n";
   	 		 chessBoard[nextRdir][nextCdir]=0;
			}
   	 	
   	}
   	
  return false; 	
   }


int main()
{ int n,r,c=0,move=0;
cout<<"Enter the size of chess board\n";
 cin>>n; 
  
 int chessBoard[D][D]={0};
 
  do{
  cout<<"enter the knight position";
   cin>>r;
   cin>>c;
  }while(r<0&&r>n||c<0&&c>n);
   
   chessBoard[r][c]=1;
  // move=1;
   
  //bool ist= solveKnight(chessBoard,n,move,r,c);
  
   bool ist=solveKnight(chessBoard,n,move+1,r,c);
			 
  if(ist==true)
  { cout<<"\nprint the total move\n";
  	
  	 for(int i=0;i<n;i++)
  	 {
  	 	for(int j=0;j<n;j++)
  	 	 cout<<chessBoard[i][j]<<"  ";
	  
	  cout<<"\n"; 
    }
	
	}else{
    	cout<<"\nwe cannot completed\n";
	}
  

	return 0;
}
