#include<iostream>
using namespace std;

  int i ;
  int j ;
  int row = 4 ;
  int col = 4 ;
  int m1[4][4];
  int m2[4][4];
  int sum[4][4];
  
  int addmultarray( )
{

cout<<"\nEnter the elements of first 1st matrix: ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>m1[i][j];
    }
  }
  cout<<"Enter the elements of second 2nd matrix: ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>m2[i][j];
    }
  }
  cout<<"Addition of Two Matrix is : ";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      sum[i][j]=m1[i][j]+m2[i][j];
      cout<<sum[i][j]<<" ";
    }
  }
  return 0 ;
}


int main()
{
     addmultarray()   ;
   return 0;
}